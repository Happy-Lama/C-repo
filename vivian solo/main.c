#include <stdio.h>
#include <stdlib.h>



int main (){
    /*int j = 62;
   int *p = NULL;
     p = &j;
    printf("the address of j is %x\n", &j);
printf("p contains address %x\n",p);
printf("the value of j is %d\n", j);
printf("p is pointing to the value %d\n", *p);*/
int x = 5;
int y;
int *p = NULL;
p = &x;
y = *p + 2;
y += *p;
*p = y;
(*p)++;

printf("p is pointing to the value %d\n", *p);

return 0;
}

