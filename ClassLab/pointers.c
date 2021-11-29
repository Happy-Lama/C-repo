#include <stdio.h>

int main(){
	int num1;
	int *ptr1;
	ptr1 = &num1;
	printf("Address of num1: %d\nAddress pointer is at %d\n",&num1,ptr1);
	scanf(" %d",&num1);
	printf("num1 is : %d\n",num1);
	//scanf(" %d",ptr1);
	printf("ptr1 is : %d\n",*ptr1);
	*ptr1 = 13;
	printf("num1 is : %d\n",num1);
	//num1[1] = *(ptr1 + 1)
	return 0;
}