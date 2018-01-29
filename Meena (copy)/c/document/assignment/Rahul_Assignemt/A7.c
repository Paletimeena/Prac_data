#include<stdio.h>
int main()
{
	int v1,v2,max;
	printf("Please enter the number\n");	
	scanf("%d%d",&v1,&v2);
	max=v1>v2?v1:v2;
	printf("Maximum value is :%d\n",max);
	printf("Thanks\n");
}
