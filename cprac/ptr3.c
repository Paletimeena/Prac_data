#include<stdio.h>


int main()
{
	int arr[5],*ptr,index =0;
	ptr = arr;

	do {
		printf("enter %d value of array \n",index+1);
		scanf("%d",&arr[index]);
		if (arr[index] == 0)
			break;
		index++;
		//printf("%d\n",index);
		}while(arr[index -1] !=0);

		for(int i =0;i<index ;i++)

		{
			printf("%p ---- %d \n",ptr,*ptr );
			ptr++;
		}

return 0;

}