#include<stdio.h>
int main()
{	
	int num,total = 0;
	do
	{
		printf("enter the number\n");
		scanf("%d",&num);
		if(num < 0)
			continue;
		total += num;

	}while (num !=0);

	printf("toatl sum is %d\n",total);

	return 0;
}
