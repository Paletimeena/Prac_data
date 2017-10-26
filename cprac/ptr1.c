#include<stdio.h>
#include<math.h>

int main()
{
	int arr[5]={1,5,3,8,5};
	int *ptr,size;
	ptr = arr;
	size = sizeof(arr)/sizeof(int);
	//printf("%d \n",arr[0]);
	for (int i =0;i<size;i++){
		printf("%d \n",*ptr)
;		++ptr;
	}
return 0;	

}