#include <stdio.h>

int main(){
	int a = 0;
	float d = 10.28f;
	printf("%lu\n",sizeof(a+d));
	printf("%lu\n",sizeof(++a));
	printf("the size of a is %d", sizeof(a));
	
	return 0;
}