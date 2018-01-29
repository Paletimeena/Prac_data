#include<stdio.h>
int main()
{
	int num,i=0,j,arr[10];
	printf("enter the deceimal number\n");
	scanf("%d",&num);
	while(num)
	{
	arr[i]= num % 2;
	num = num /2;
	i++;
	
	}
	 
	for(j=i;j>=0;j--)
		printf("%d",arr[j]);

return 0;
}

