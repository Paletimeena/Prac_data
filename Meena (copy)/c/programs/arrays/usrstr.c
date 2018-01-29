#include<stdio.h>
int main()
{
	char arr[10];
	char ch;
	int i=0,j=0;
	do
	{
		printf("enter the character\n");
		scanf("\n %c",&ch);
		arr[i]=ch;
		i++;
	}while(ch !='0');
	for(j=0;j<i-1;j++)
		printf("%c",arr[j]);

return 0;


}
