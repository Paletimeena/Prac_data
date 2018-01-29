#include<stdio.h>
int main()
{
	int arr[5][5];
	int i,j;
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			arr[i][j]=i*5+j+1;
		//	arr[i][j]=i*(j+3)+j+1;
		}
	
	}
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
		printf("%p %d\n",&arr[i][j],arr[i][j]);
	
		}
	
	}

return 0;
	
}
