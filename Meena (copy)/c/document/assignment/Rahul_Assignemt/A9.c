#include<stdio.h>
int main()
{
	int v1,v2,res;
	v1=235;
	v2=756;
	res=v1&v2;
	printf("Result is  %d\n",res);
	res=v1|v2;
	printf("Result is  %d\n",res);
	res=v1^v2;
	printf("Result is  %d\n",res);
	v1=10;
	res=~v1;
	printf("Result is  %d\n",res);
	v1=10;
	res=v1<<5;
	printf("Result is  %d\n",res);
	res=res>>3;
	printf("Result is  %d\n",res);
}
