#include<stdio.h>
int main()
{
	int my2arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int i = 0,j = 0;
	
	for (i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%p %d\n",&my2arr[i][j],my2arr[i][j]);
	}

return 0;
}
