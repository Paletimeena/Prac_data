#include<stdio.h>


int main()
{
	int matrix[3][3]={{1,2,3},
			{4,5,6},
			{7,8,9}};
	int (*ptr)[3]=NULL;
	ptr=matrix;
	
	for(int i=0;i<3;i++){
		printf("%d\n",*(*(ptr++)));}
	
			

		
return 0;


}
