#include<stdio.h>
int main()
	{
		int v1,v2,v3,v4;
		v1=0123;
		v2=0756;
		v3=v1 & v2;
		printf(" and operation %d\n",v3);
		v3=v1 | v2;
		printf(" or operation %d\n",v3);
		v3=v1 ^ v2;
		printf("xor operation %d\n",v3);
		v1=123;
		v2=756;
		v3=v1 & v2;
		printf("int  and operation %d\n",v3);
		v3=v1 | v2;
		printf("int or operation %d\n",v3);
		v3=v1 ^ v2;
		printf("int xor operation %d\n",v3);
		v4=~0x54A;
		//printf("%\n",v4);
		return 0;
	}
