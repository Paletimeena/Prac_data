#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,index,num,size;
	printf("enter the number of bytes need to be allocated\n");
	scanf("%d",&num);
	size= num*sizeof(int);
	ptr = (int *)malloc(size);
	if(ptr == NULL)
	{
		printf("Error\n");
		return 1;	
	}
	for(index=0;index<num;index++)
		*(ptr+index)=index+1;
	for(index=0;index<num;index++)
		printf("element: %d\t",*(ptr+index));

	free(ptr);


return 0;
}

