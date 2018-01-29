#include<stdio.h>
void myfun(int v1, int v2,int *add,int *mul,int *sub,int *div)
{
	//v1++;
//	++*v2ptr;
	*add = v1 + v2;
	*mul = v1 * v2;
	*sub = v1 - v2;
	*div = v1 / v2;
}
int main()
{
	int v1,v2,add,sub,mul,div;
	v1=5;
	v2=2;
	printf("v1: %d v2: %d\n",v1,v2);
	myfun(v1,v2,&add,&mul,&sub,&div);
//	printf("v1: %d v2: %d\n",v1,v2);
	printf("v1+v2: %d\n",add);
	printf("v1*v2: %d\n",mul);
	printf("v1-v2: %d\n",sub);
	printf("v1/v2: %d\n",div);



return 0;
}
