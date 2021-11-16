#include <stdio.h>
#include <math.h>
//Calculator that solves quadratic equations and carries out operartions on two numbers

int main(){
	double num_1, num_2;
	char operation;
	double a, b, c, root_1, root_2;
	for(;operation != 'q';){
		printf("Choose an operation(/, *, -, +),  e for quadratic equation and q to quit :\n");
		scanf(" %c", &operation);
		switch(operation){
			case '+':
				printf("Enter the numbers(x, y):\n");
				scanf("%lf %lf", &num_1, &num_2);
				printf("%.2lf + %.2lf = %.2lf\n", num_1, num_2, num_1 + num_2);
				printf("\n");
				break;
			case '-':
				printf("Enter the numbers(x, y):\n");
				scanf("%lf %lf", &num_1, &num_2);
				printf("%.2lf - %.2lf = %.2lf\n", num_1, num_2, num_1 - num_2);
				printf("\n");
				break;
			case '*':
				printf("Enter the numbers(x, y):\n");
				scanf("%lf %lf", &num_1, &num_2);
				printf("%.2lf * %.2lf = %.2lf\n", num_1, num_2, num_1 * num_2);
				printf("\n");
				break;
			case '/':
				printf("Enter the numbers(x, y):\n");
				scanf("%lf %lf", &num_1, &num_2);
				printf("%.2lf / %.2lf = %.2lf\n", num_1, num_2, num_1 / num_2);
				printf("\n");
				break;
			case 'e':
				printf("Enter the integers:\n");
				printf("\na:");
				scanf("%lf",&a);
				printf("b:");
				scanf("%lf",&b);
				printf("c:");
				scanf("%lf",&c);
				if( (b*b) >= (4*a*c) ){
					root_1 = (-b + sqrt((b*b) - (4*a*c))) / (2*a);
					root_2 = (-b - sqrt((b*b) - (4*a*c))) / (2*a);
					printf("\n");
					printf("X1 = %.2lf\nX2 = %.2lf\n",root_1,root_2);
					printf("\n");
				}else{
					printf("\n");
					printf("X1 = %.2lf + j%.2lf\n", (-b)/(2*a), sqrt(-((b*b) - (4*a*c))));
					printf("X2 = %.2lf - j%.2lf\n", (-b)/(2*a), sqrt(-((b*b) - (4*a*c))));
					printf("\n");
				}
				break;
		}
	}
	printf("GoodBye");
}