#include<stdio.h>
int * myfun()
{
	int v1=10;
	int *ptr1;
	ptr1 = &v1;
	printf("my fun: %d\n",*ptr1);
	
return ptr1;
}
int main()
{
	int *ptr;
	ptr = myfun();
	printf("%p\n",ptr);
	printf("main fun:%d\n",*ptr);

return 0;
}
