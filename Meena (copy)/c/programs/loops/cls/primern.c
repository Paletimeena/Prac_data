#include<stdio.h>
int main()
{
	int i,x,y,c=0,z;
	printf("enter the number \n");
	scanf("%d",&x);
	for(i=2;i<x;i++)
	{
		y = x%i;
		z= x / i;
		if(y==0)
		{
			printf("%d is not a prime\n",x);
			c=1;
			printf("%d",z);
			break;
		}

	}
	if(c==0)
	{

		printf(" num %d is a prime number\n",x);
	}

return 0;	

}
