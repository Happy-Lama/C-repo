#include <stdio.h>
void swap(int arr[*],int, int);
int main(){
	
	//initialise array and array length
	int arr[] = {33,31,40,8,12,17,25,42}, length = sizeof(arr)/sizeof(arr[0]), dividend = 2, interval = length/dividend;
	
	//sorting algorithm for an n element array
	//algorithm
	//first compare elements in the array in an interval of n/2 and swap them if theyre not in correct order(asecending order)
	//repeat until interval is 1 while increasing the dividend by 2 after each iteration
	while(interval != 1){
		printf("%d\n",interval);
		for(int i = 0; i < length/interval; i++){
			if(arr[i] > arr[i+interval])
				swap(arr,i,i+interval);
		}
		dividend += 2;
		interval = length/dividend;
		//printf("%d\n",interval);
	}
	
	for(int j = 0; j < length; j++)
		printf("%d\t",arr[j]);
	
	return 0;
}

void swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}