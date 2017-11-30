#include<stdio.h>

int main()
{


	int arr[7]={4,6,7,8,10,12,14},x=10,n=0;
	int i =0;
	int j=6;
	while(i<j)
	{
		n++;
		printf("%d %d\n",arr[i],arr[j]);
	        if(x==arr[i]+arr[j]){
			printf("element ...%d %d\n",arr[i],arr[j]);
			break;	}
		else if(arr[i]+arr[j] < x)
				i++;
		else
			j--;
	}

printf("number of iterations %d\n",n);
return 0;
}
