#include<stdio.h>
int main()
{	
	int num , sum=0 ,total=0;
	for(num=0;num < 3; num++)
	{
	        printf("enter the no \n");
	       	scanf("%d",&sum);
	        printf(" sum is %d",sum);
	        total += sum;
	}
	printf(" the total of entered sum is %d\n",total);
	num=0;
	total =0;
	while(num<3)
	{
	        printf("enter the no \n");
	       	scanf("%d",&sum);
	        printf(" sum is %d",sum);
	       	num +=1;
	        total += sum;
	}
	printf(" the total of entered sum is %d\n",total);
	return 0;
}
