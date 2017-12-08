#include<stdio.h>

int main()
{
	double v1,* ptr,* ptr1;
	ptr=&v1;
	printf("%p\n",ptr);
	ptr1=ptr;
	ptr++;
	int res = (int)ptr-(int)ptr1;
	printf("sizeof given variable is :%d\n",res);
	
return 0;
}
