#include<stdio.h>
#include<math.h>

int main()
{
	int arr[10],*ptr,size;
	ptr = arr;
	printf("Enter the size of array : \n");\
	scanf("%d",&size);

	for (int i =0; i < size ;i++){
		printf("%d value of array : \n",i );
		scanf("%d",&arr[i]);
		}

	for(int i =0 ;i<size ;i++){
		printf("%p value is  %d\n",ptr,*ptr);
		++ptr;
	}
}