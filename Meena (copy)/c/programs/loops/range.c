#include<stdio.h>
int main()
{
	int i , num1 , num2;
	printf("enter the two numbers \n");
	scanf("%d %d",&num1 , &num2);
	for(i=num1;i<=num2;i++)
	{
	printf("%d \n", i);
	}
	printf("enterd into while loop");
	while(num1<=num2)
	{
	printf("%d \n", num1);
	num1 +=1;
	}

return 0;
}
