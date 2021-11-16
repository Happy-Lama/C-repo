#include <stdio.h>

int main(){
	int number, isprime = 1;
	
	//prompt for user input
	printf("Enter a number: ");
	scanf("%d", &number);
	
	//logic
	//divide the number by numbers between 1 and itself
	//if its divisible by any, its not a prime number
	for(int i = 2; i < (number/2 + 1); i++){
		//printf("%d\n",i);
		if(number%i == 0){
			isprime = 0;
			break;
		}
	}
	
	//if the loop successfully executes prime = 1
	//else prime = 0
	printf("%s", isprime ? "prime":"not a prime");
	return 0;
}.