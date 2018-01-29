#include<stdio.h>
void fun1();
void fun2();
//extern int v1;
void main()
{
static int v1 =1;
	fun1();
	fun2();
	fun1();
	fun2();
}
void fun1()
{
	printf("%d\n",v1);
	v1 *= 2;
	printf("%d\n",v1);

}

void fun2()
{
	printf("%d\n",v1);
	v1 *= 5;
	printf("%d\n",v1);


}

