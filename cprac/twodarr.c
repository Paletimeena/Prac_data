#include<stdio.h>

int main()
{

	int arr[3][2]={{0,1},{2,3},{3,4}};
	int i,j;
	for (i = 0;i<3;i++)

	{

		for (j=0;j<2;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
return 0;

}