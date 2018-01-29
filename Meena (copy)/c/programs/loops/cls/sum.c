#include<stdio.h>
void main()
{
	int num,i,total=0,num1;
	printf("how many numbers you want to enter \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number %d \n",i);
		scanf("%d",&num1);
		if(num1>=0)
		{
			total +=num1;
		}
	}
	printf("sum of numbers you entered %d\n",total);
	
	i=0,total=0;
	do
	{
		printf("enter the number %d \n",i);
		scanf("%d",&num1);
		if(num1>=0)
		{
			total +=num1;
		
		}
			i=i+1;
	}while(num1 != 0);
	printf("sum of numbers you entered %d\n",total);

	i=1;total=0;
	while(i<=num)
	{
		printf("enter the number %d \n",i);
		scanf("%d",&num1);
		if(num1>=0)
		{
			total +=num1;
			
		}
		i=i+1;

	}
	printf("sum of numbers you entered %d\n",total);
	
}	
