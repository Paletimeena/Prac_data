#include<stdio.h>
#define EXPR(v1,v2) v1*v2
int main()
{
	printf("%d\n",EXPR(5,2));
	printf("%d\n",EXPR(10,5+2));
	printf("%d\n",20/EXPR(10,5+2));
return 0;
}
