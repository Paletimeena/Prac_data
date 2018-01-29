#include<stdio.h>
extern int v1;
void fun1()
{
//	int v1 =20;
	printf("%d\n",v1);
	v1 *= 2;
	printf("%d\n",v1);

}

 //	int v1 =1;
void fun2()
{
	printf("%d\n",v1);
	v1 *= 5;
	printf("%d\n",v1);


}
 

int v1 = 1;
void main()
{
	fun1();
	fun2();
	fun1();
	fun2();


}

