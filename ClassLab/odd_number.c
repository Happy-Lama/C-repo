#include <stdio.h>
int main(){
	int number;
	
	//prompt for user input
	printf("Enter a number: ");
	scanf(" %d", &number);
	
	//number%2 == 0 ? printf("Even"):printf("Odd");
	
	//output odd or even
	printf("%s", number%2 ? "Odd": "Even" );
	
	return 0;
}