#include<stdio.h>
int main()
{
	int v1,v2,res;
	printf("Please enter the number\n");
	scanf("%d%d",&v1,&v2);
	res=(v1<v2);
		printf("Result is :%d\n",res);
	res=(v1>v2);
		printf("Result is :%d\n",res);
	res=(v1==v2);
		printf("Result is :%d\n",res);
	res=(v1>=v2);
		printf("Result is :%d\n",res);
	res=(v1<=v2);
		printf("Result is :%d\n",res);
}
