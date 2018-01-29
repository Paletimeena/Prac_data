#include<stdio.h>
int main()
{
	int num,max,min,len,i=0,arr[10];
	do
	{
	printf("ente the number\n");
	scanf("%d",&num);
	if(num != 0)
	{
		arr[i]=num;
		i++;
	}
	}while(num);

	len=i;
	for (i=0;i<len;i++)
	{
	printf("%p %d\n",&arr[i],arr[i]);

	}
	max = min = arr[0];

	for (i=0;i<len;i++)
	{
	if(arr[i]<min)
	{
		min=arr[i]; 
	}
	if(arr[i]>max)
	{
		max=arr[i]; 
	}
	}
	printf("max=%d min=%d\n",max,min);

return 0;
}
