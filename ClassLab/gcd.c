#include <stdio.h>

int main(){
	int num, den, gcd = 1;
	printf("Enter numerator: ");
	scanf(" %d",&num);
	printf("Enter denominator: ");
	scanf(" %d", &den);
	int i = den, j = num;
	while(1){
		if( i == 0){
			gcd = j;
			break;
		}else if(j == 0){
			gcd = i;
			break;
		}else if(i > j){
			i = i%j;	
		}else if(j > i){
			j = j%i;
		}
	}
	
	printf("In lowest form: %d/%d",num/gcd,den/gcd);
}