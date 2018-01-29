#include<stdio.h>
void main()
{

	int arr[2]={10,25};
	int *ptr ,v1;
	printf("%p %d\n",&arr[0],arr[0]);
	printf("%p %d\n",&arr[1],arr[1]);	
	ptr = &arr[0];
	printf(": %p %d\n",ptr,*ptr);
	ptr++;
	printf(":ptr++ %p %d\n",ptr,*ptr);
	ptr = arr;
	v1=*ptr++;
	printf("*ptr++\n %p %d %d\n",ptr,*ptr,v1);
	ptr = arr;
	v1=(*ptr)++;
	printf("*ptr ++\n %p %d %d\n",ptr,*ptr,v1);	
	ptr = arr;
	v1=++*ptr;
	printf("++*ptr\n %p %d %d\n",ptr,*ptr,v1);
	ptr = arr;
	v1=*++ptr;
	printf("*++ptr\n %p %d %d\n",ptr,*ptr,v1);
	v1=++*ptr;
	printf("++*ptr \n %p %d %d\n",ptr,*ptr,v1);

}
