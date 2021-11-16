#include <stdio.h>

int main(){
	
	//Initialise variables to hold numbers: A, B and gcd used in calculation
	int A, B, gcd = 1;
	
	//variables to hold user input for display later
	int numerator, denominator;
	
	
	//prompt for user input
	printf("Enter numerator:\n");
	scanf(" %d",&numerator);
	printf("Enter denominator:\n");
	scanf(" %d", &denominator);
	
	//prompt user for valid input(a valid fraction)
	while(denominator == 0){
		printf("Invalid denominator");
		printf("Enter denominator:\n");
		scanf(" %d", &denominator);		
	}
	
	//Assign user input values to the variables used in the calculation
	A =  numerator;
	B = denominator;
	
	//determine the greatest common divisor using Euclid's algorithm
	while(1){
		if(A == 0){
			gcd = B;
			break;
		}else if(B == 0){
			gcd = A;
			break;
		}else{
			if(A >= B){
				A = A%B;	
			}else{
				B = B%A;
			}
		}
	}
	
	//Display fraction in simplest form
	printf("In lowest terms: %d/%d", numerator/gcd, denominator/gcd);
	
	return 0;
	
}