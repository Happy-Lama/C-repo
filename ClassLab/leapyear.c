#include <stdio.h>

int main(){
	
	//variable to hold the year
	int year;
	
	//prompt for user input
	printf("\n");
	printf("Enter a year: ");
	scanf(" %d", &year);
	
	//determine if input is a leap year or not
	//leap year is divisible by 4  and not divisible by 100, and if its a century, its divisible by 400
	if((year%4 == 0 && year%100 != 0) || (year%400 == 0)){
		printf("%d is a leap year", year);
		printf("\n");
	}else{
		printf("%d is not a leap year", year);
		printf("\n");
	}
	
	return 0;
}