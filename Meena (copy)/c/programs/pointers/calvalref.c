#include<stdio.h>
void myfun(int v1, int *v2ptr)
{
	v1++;
	++*v2ptr;
	
}
int main()
{
	int v1,v2;
	v1=v2=10;
	printf("v1: %d v2: %d\n",v1,v2);
	myfun(v1,&v2);
	printf("v1: %d v2: %d\n",v1,v2);



return 0;
}
