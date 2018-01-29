#include<stdio.h>
int main()
{
	int arr[10]={10,3,30,40,31,60,5,80,90,20};
	int start =0;
	int end = sizeof(arr)/sizeof(int)-1;
	int mid = 0;
//	size = end+1;
	int num,index,index1,temp;
	for(index=0;index<=end;index++)
		printf("%d\t",arr[index]);
	printf("\n");
	for(index =0;index<=end;index++)
	{	
		for(index1=0;index1<end-index;index1++)
		{
			if(arr[index1]>arr[index1+1])
			{
				temp = arr[index1];
				arr[index1]=arr[index1+1];
				arr[index1+1]=temp;
			}
		}
	printf("in: %d\n",index1);
	}
	for(index=0;index<=end;index++)
		printf("%d\t",arr[index]);
	printf("\n");
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
