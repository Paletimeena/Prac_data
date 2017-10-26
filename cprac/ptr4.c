#include<stdio.h>

int main()
{

	int arr[5]={10,20,30,40,50};
	int *ptr;
	ptr = arr;

	printf("%p ---- %d\n", ptr,*ptr);
	ptr++;
	printf("%p ---- %d\n", ptr,*ptr);
	(*ptr)++;
	printf("%p ---- %d\n", ptr,*ptr);
	ptr++;
	(*ptr)++;
	printf("%p ---- %d\n", ptr,*ptr);
	ptr--;
	--ptr;
	printf("%p ---- %d\n", ptr,(*ptr)--) ;
	printf("%p ---- %d\n", ptr,*ptr);
return 0;
}