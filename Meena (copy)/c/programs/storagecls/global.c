#include<stdio.h>
static int v1;

void func1()
{
	
	printf("%d\n",v1);
	v1 *= 2;
	printf("%d\n",v1);
}
void func2()
{
	
	printf("%d\n",v1);
	v1 *= 5;
	printf("%d\n",v1);
}

void main()
{	
	v1 = 1;
	func1();
	func2();
	func1();
	func2();

}
