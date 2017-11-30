#include<stdio.h>
//static int a =8;
//int *ptr = &a;
float b = 11;
int main()
{
register float r = 1.6767;
//int c = 12;
//static int a =10;
printf("register :%f %f\n",r,b);
//printf("address of register variable %p %p %p data: %d\n",&a,&b,&c,a);
//printf("address of  variable a global  %p \n",ptr);
//printf("address: %p value :%d", &r, r);
return 0;
}
