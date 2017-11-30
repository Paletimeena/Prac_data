#include<stdio.h>

int main()
{



	int arr[6]={4,6,8,10,12,14},x=10,n=0;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			n++;
			 printf("%d %d\n",arr[i],arr[j]);
			if(x==arr[i]+arr[j])
				printf("element ...%d %d\n",arr[i],arr[j]);
				
			if(arr[i]+arr[j] > x)
				break;
		}
	}
printf("number of iterations %d\n",n);
return 0;
}
