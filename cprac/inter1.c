#include<stdio.h>

int main()
{
	char name[10],len;
	printf("enter your name\n");
	scanf("%s",&name);
	printf("your name is : %s \n",name);
	for(int i=0;name[i] !='\0';i++)		
	len++;
	
	printf("your reversed name is :");
	for(int i=len;i>=0;i--)
	{
		printf("%c",name[i]);


	}

	printf("\n");
	
	for(int i=0,j =len-1;i<=j/2;i++,j--)
	{
		char a;
		a=name[i];
		name[i]=name[j];
		name[j]=a;
		
	}
	
	printf("ptr reversed name: %s \n",name);

return 0;

}
