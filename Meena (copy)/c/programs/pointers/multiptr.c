#include<stdio.h>
int main()
{
	int v1 = 10;
	int *sptr;
	int **dptr , ***tptr;
	sptr = &v1;
	dptr = &sptr;
	tptr = &dptr;
	printf("to print v1 value\n");
	printf("v1=10: %d\n",v1);
	printf("*sptr: %d\n",*sptr);
	printf("**ptr: %d\n",**dptr);
	printf("***tptr: %d\n",***tptr);
	printf("v1 accessed in differnt ways\n");


	printf("to print &v1 \n");
	printf("&v1: %p\n",&v1);
	printf("sptr: %p\n",sptr);
	printf("*ptr: %p\n",*dptr);
	printf("**tptr: %p\n",**tptr);
	printf("v1 address is accessed in differnt ways\n");

	printf("to print adrress");
	printf("&v1: %p\n",&v1);
	printf("&sptr: %p\n",&sptr);
	printf("&dptr: %p\n",&dptr);
	printf("&tptr: %p\n",&tptr);
	printf("v1 accessed in differnt ways\n");
return 0;
}
