#include<stdio.h>
//#define DEBUG
int main()
{
	printf("hello world1\n");
	#ifdef DEBUG
	printf("hello world2\n");
	printf("hello world3\n");
	printf("hello world4\n");
	printf("hello world5\n");
	printf("hello world6\n");
	#endif
	printf("hello world7\n");
	printf("hello world8\n");

return 0;
}
