/** #include <stdio.h>

int main(){
	//variables for numbers and operator
	int num1, num2;
	char operator;
	
	//prompt user for integers and operator
	printf("\n");
	printf("Enter an integer: ");
	scanf(" %d", &num1);
	printf("Enter an integer: ");
	scanf(" %d", &num2);
	printf("Enter an operator(*, /, +, -): ");
	scanf(" %c", &operator);
	
	//check for the operation and display the relevant output
	switch(operator){
		case '*':
			printf("%d * %d = %d", num1, num2, num1*num2);
			break;
		case '/':
			printf("%d / %d = %d", num1, num2, num1/num2);
			break;
		case '+':
			printf("%d + %d = %d", num1, num2, num1+num2);
			break;
		case '-':
			printf("%d - %d = %d", num1, num2, num1-num2);
			break;
		default:
			printf("Unknown operator");
	}
	return 0;
} **/

#include <stdio.h>

int main(){
	int a, b, op;
	printf("add, subtract, divide, multiplication");
	printf("\n");
	printf("Enter values a and b: ");
	scanf("%d%d",&a, &b);
	printf("Enter your choice: ");
	printf("\n");
	scanf(" %d",&op);
	switch(op){
		case 1:
			printf("%d + %d = %d", a, b, a+b);
			break;
		case 2:
			printf("%d - %d = %d", a, b, a-b);
			break;
		case 3:
			printf("%d / %d = %d", a, b, a/b);
			break;
		case 4:
			printf("%d * %d = %d", a, b, a*b);
			break;
		default:
			printf("Unknown option");
	}  
	return 0;
}