#include<stdio.h>
int main()
{
	int v1,v2;
	int *ptr;
	v1 = 10;
	v2 = 20;
	ptr = &v1;
	printf("%p %d\n",&v1,v1);
	*ptr = *ptr + 1;
	printf("pointer:%p %p %d\n",&ptr,ptr,*ptr);
	ptr = &v2;	
	printf("%p %d\n",&v2,v2);
	*ptr = *ptr + 1;
	printf("pointer:%p %p %d\n",&ptr,ptr,*ptr);



return 0;
}
