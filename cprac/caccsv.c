#include<stdio.h>
#include "file1.h"
extern int x;
int fun1();
int b = 10;
static int c =10;
int main()
{

	int a = 5;
	printf("a value in main block : %d\n",a);//a = 5
	printf("b value in main block : %d\n",b);// b = 10
	printf("c value in main block : %d\n",c);// c =10
	c = c+10;
	printf("c value in main block : %d\n",c);// c = 20
	fun1();
	printf("c value in main block : %d\n",c);//30
	fun1();
	printf("var value from externel file : %d\n",x);
return 0;
}

int fun1()
{
//printf("a value in fun1 block : %d\n",a);
printf("b value in fun1 block : %d\n",b);//10
c = c+10;
printf("c value in fun1 block : %d\n",c);//30


}