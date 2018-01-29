#include<stdio.h>
int main()
{
	int i,j,len,num,temp;
	printf("enter the length \n");
		scanf("%d",&len);
	int arr[len];
	for(i=0;i<len;i++)
	{
		printf("enter the number\n");
		scanf("%d",&num);
		arr[i] = num;
	}
	for(i=0;i<len;i++)
	{
		printf("%p %d\n",&arr[i],arr[i]);

	}
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp = arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		
	
	}
	
	for(i=0;i<len;i++)
	{
		printf("%p %d\n",&arr[i],arr[i]);

	}
return 0;
}
