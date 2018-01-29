#include<stdio.h>
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int start =0;
	int end = sizeof(arr)/sizeof(int)-1;
	int mid = 0;
	int num;
	printf("enter the number you want to search\n");
	scanf("%d",&num);
	while(1)
//if(start <= end)
	{
		if(start <=end)
		{
		mid = (start+end)/2;
		
		if(num < arr[mid])
			end = mid - 1;
		else if(num > arr[mid])
			start = mid + 1;
		else
		{
			printf("element found : %d at index : %d\n",arr[mid],mid);
			break;
		}
		}
		else if(start >end)
		{			
			printf("element not found\n");
			break;		
		}

	}
	

//	printf("mid is %d\n",mid);
//	if(arr[mid] !=num)
//		printf("element not found\n");

return 0;

}
