#include<stdio.h>
int main()
{
	int arr[10]={10,25,37,41,50,60,70,80,90,100};
	int *ptr,*ptr1,index=0;
	ptr = arr;
	ptr1 = arr;
	while(arr[index] !='\0')
	{
		printf("%p %d\n",&arr[index],arr[index]);
		ptr1 = ptr;
		ptr = ptr +1;
		printf("%d\n",*ptr- *ptr1);
		index++;

	}
	printf("\n");
	ptr = arr;
	ptr++;
	printf("%p %d\n",ptr,*ptr);
	ptr = ptr+4;
	printf("%p %d\n",ptr,*ptr);
	++ptr;
	printf("%p %d\n",ptr,*ptr);
	ptr--;			
	printf("%p %d\n",ptr,*ptr);
	--ptr;
	printf("%p %d\n",ptr,*ptr);
	ptr = ptr+6;	
	printf("%p %d\n",ptr,*ptr);
	ptr = arr;
	*ptr = 30;
	printf("%d\n",arr[0]);
return 0;
}
