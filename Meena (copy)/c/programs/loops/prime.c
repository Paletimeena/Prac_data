#include<stdio.h>
int main()
{
	int i,x,y,c=0,z;
	printf("enter the number \n");
	scanf("%d",&x);
	if(x>0)
	{
		for(i=1;i<=x;i++)
		{
			y = x%i;
		//z= x / i;
			if(y==0)
			{
		//	printf("%d is not a prime\n",x);
			c += 1;
		//	printf("%d",z);
		//	break;
			}
		}		
	}
	else
	{
		printf("please enter +ve values only\n");
	}
	if(c==2)
	{

		printf(" num %d is a prime number\n",x);
	}
	else
	{
		
	printf("num %d is not prime number \n",x);

	}

return 0;	

}
