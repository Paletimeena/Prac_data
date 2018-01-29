#include<stdio.h>
int main()
{
	int v1=25,v2=35,res;
	res=v1+v2;
	printf("1.Result is :%d\n",res);
	v1=30;
	v2=10;
	res=v1-v2;
	printf("2.Result is :%d\n",res);
	printf("Please enter the number\n");
	scanf("%d%d",&v1,&v2);
	res=v1*v2;
	printf("3.Result is :%d\n",res);
	return 0;
}
