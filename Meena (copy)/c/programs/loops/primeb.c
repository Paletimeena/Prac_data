#include<stdio.h>
int main()
{
	int i = 2,num,len,count = 0,rem;
	printf("enter the number \n");
	scanf("%d",&num);
	len = num /2;
	if(num>1)
	{
		while(i<len)
		{
			rem  = num % i;
//		z= x / i;
			if(rem == 0)
			{
				printf("%d is not a prime\n",num);
				count = 1;
				printf("divided by %d\n",i);
				break;
			}	
			i = i+1;

		}		
		if(count == 0)
			printf(" num %d is a prime number\n",num);
		
	}
	
	else
	{
		printf("not a prime number\n");
	}

	return 0;	

}
