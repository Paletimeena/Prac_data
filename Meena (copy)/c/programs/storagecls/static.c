#include<stdio.h>
static int v2 = 10;
void func()
{
	int v1=10;
//	static int v2;
//	printf("%d\n",v1);
	//v1 = 10;
//	v2= 10;
//	printf("%d\n",v2);
	//v2 = 10;
	v1++;v2++;
	printf("%d %d\n",v1,v2);
	printf("%p %p\n",&v1,&v2);
}
void main()
{
	func();
	func();
	func();

}
