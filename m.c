#include<stdio.h>

#define fun(a,b) a+b
typedef enum{mon,tue,wed}data;


int main()
{

data d=tue;

printf("raghuram said its test only result= %d %d\n",d,fun(1,2));


return 0;
}
