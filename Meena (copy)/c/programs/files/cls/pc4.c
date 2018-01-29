#include<stdio.h>
#define PRINT(v1) printf("v1 %d\n",v1)
#define PRINT1(v1) printf(#v1" %d\n",v1)
int main()
{
	int v2=10;
	PRINT(v2);
	PRINT1(v2);
	


return 0;
}
