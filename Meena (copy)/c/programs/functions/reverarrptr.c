#include<stdio.h>
int* reverse_array(int* ptr)
{
	int index=0,temp,index2;
	while(*ptr !='\0')
	{
		(*ptr)++;
		ptr++;
	
		
	//	temp=*ptr[index2];
	//	arr[index2]=arr[index];
	//	arr[index]=temp;
		
	//	printf(":: %d\n",arr[index]);
	}
/*	for(index=0;arr[index] !='\0';index++)
	{
		printf("%d\n",arr[index]);
	
	}*/
return ptr;

}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int len,index;
//	int *ptr;
//	ptr = &len;
	len =sizeof(arr)/4;
//	len--;
	printf("length of the string : %d\n",len);
	len--;
	for(index=0;index<=len;index++)
		printf(" %p %d\t",&arr[index],arr[index]);	
	printf("\n");
	reverse_array(arr);

	for(index=0;index<=len;index++)
		printf(" %p %d\t",&arr[index],arr[index]);
	printf("\n");





return 0;

}
