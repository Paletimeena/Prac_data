#include<stdio.h>
void main()
{
	int num,res=0;
	printf("enter the number\n");
	scanf("%d",&num);
	while(num !=0)
	{
	res +=num % 10;
	num = num / 10;
//	printf("number %d\n",num);
	}
	printf("sum of number digits is %d\n ",res);



}
