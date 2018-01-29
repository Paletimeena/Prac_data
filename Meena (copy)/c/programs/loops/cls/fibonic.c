#include<stdio.h>
void main()
{
	int i, a=0,b=1,c,num;
	printf("enter how many fibonic series you need\n ");
	scanf("%d",&num);
	printf("%d\t%d\t",a,b);
	for(i=2;i<num;i++)
	{
	c = a+b;
	a= b;
	b = c;
	printf("%d\t ",c);
	}




}
