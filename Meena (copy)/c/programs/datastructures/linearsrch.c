#include<stdio.h>
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int num,size,index;
	size = sizeof(arr)/sizeof(int);
	for(index=0;index<size;index++)
	{
		printf("%d\t",arr[index]);
	
	}
	printf("\n");
	printf("enter the number\n");
	scanf("%d",&num);
	for(index=0;index<size;index++)
	{
		if(arr[index] == num)
			break;
	}

	//if(arr[index] == num)
//		printf("%d found at %d\n",num,index);
	if(index == size)
		printf("element not found\n");

	else
		printf("%d found at %d\n",num,index);



return 0;
}
