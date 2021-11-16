#include <stdio.h>

int main(){
	
	//initialise/declare variables of various data types
	short a;
	long b;
	long long c;
	long double d;
	float e;
	
	//sizeof() function is for getting size of what ever argument its given.
	
	//print the size of the various data types.
	//Note: sizes may differ depending on the architecture of your system.
	printf("size of short = %d bytes\n",sizeof(a)); //2 bytes
	printf("size of long = %d bytes\n",sizeof(b)); //4 bytes
	printf("size of long long = %d bytes\n",sizeof(c)); //8 bytes 
	printf("size of long double = %d bytes\n",sizeof(d)); //12 bytes
	printf("size of float = %d bytes\n",sizeof(e)); //4 bytes
	printf("long double = %Lf",d);//0.00000000
	
	return 0;
}