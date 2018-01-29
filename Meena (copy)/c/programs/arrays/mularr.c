#include<stdio.h>
int main()
{
	int num,mul,range,i;
	printf("enter the number and range");
	scanf("%d %d",&num,&range);
	int arr[range];
	printf("num: %d range: %d\n",num,range);
	for(i =1;i <=range ; i++)
	{
		mul = num * i;
		arr[i-1] = mul;
	}
	i = 0;
	while(arr[i] !='\0')
	{
		printf("%d\n",arr[i]);
		i++;
	}

return 0;
}
