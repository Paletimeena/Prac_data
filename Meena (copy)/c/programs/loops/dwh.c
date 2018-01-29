#include<stdio.h>
int main()
{
	int i , num1 , num2;
	printf("enter the two numbers \n");
	scanf("%d %d",&num1 , &num2);
	do{
		printf("%d\n",num1);
		printf("enterd into while loop");
		num1 += 1;
	  }while(num1<=num2);
		
			
		

return 0;
}
