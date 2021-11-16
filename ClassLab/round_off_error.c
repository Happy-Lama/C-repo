#include <stdio.h>

int main(){
	
	float f1 = 10000000.0, f2 = 0.0;
	for(int i = 0; i < 10 ; i++){
		f1 += 0.1; //increments f1 by 0.1
		f2 += 0.1; //increments f2 by 0.1
	}
	f2 += 10000000.0;
	printf("%.1f %.1f\n",f1, f2);//10000000.0, 10000001.0
	//the increment on f1 is not shown as the float has reached its maximum number of digits it can handle,
	// so each time f1 += 0.1 is executed, f1 remains 10000000.0
}