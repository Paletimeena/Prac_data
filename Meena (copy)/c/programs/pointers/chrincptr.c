#include<stdio.h>
int main()
{
	char v1,v2;
	char *ptr;
	v1 = 'a';
	v2 = 'b';
	ptr = &v1;
	printf("%p %c\n",&v1,v1);
	*ptr = *ptr + 1;
	printf("pointer:%p %p %c\n",&ptr,ptr,*ptr);
	ptr = &v2;	
	printf("%p %c\n",&v2,v2);
	*ptr = *ptr + 1;
	printf("pointer:%p %p %c\n",&ptr,ptr,*ptr);
	printf("size: %d\n",sizeof(ptr));


return 0;
}
