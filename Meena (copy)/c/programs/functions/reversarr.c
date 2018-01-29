#include<stdio.h>
void reverse_array(int arr[3],int len)
{
	int index=0,temp,index2;
	for(index=0,index2=len;index<=index2;index++,index2--)
	{
		temp=arr[index2];
		arr[index2]=arr[index];
		arr[index]=temp;
		
	//	printf(":: %d\n",arr[index]);
	}
/*	for(index=0;arr[index] !='\0';index++)
	{
		printf("%d\n",arr[index]);
	
	}*/
//return arr[0];

}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int len,index;
	len =sizeof(arr)/4;
//	len--;
	printf("length of the string : %d\n",len);
	len--;
	for(index=0;index<=len;index++)
		printf(" %p %d\t",&arr[index],arr[index]);	
	printf("\n");
	reverse_array(arr,len);

	for(index=0;index<=len;index++)
		printf(" %p %d\t",&arr[index],arr[index]);
	printf("\n");





return 0;

}
