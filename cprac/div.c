#include<stdio.h>
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(((num>>4)<<4)==num)
	{
		printf("divisible\n");
	}
	else
		printf("no");

	return 0;
}
