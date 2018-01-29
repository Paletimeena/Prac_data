#include<stdio.h>
int main()
{
	float res,fv1,fv2;
	int v1,v2;
	v1=10;
	v2=3;
	res=v1/v2;
	printf("Result is %f\n",res);

	fv1=10;
	fv2=3;
	res=fv1/fv2;
	printf("Result is %f\n",res);

	v1=10;
	v2=3;
	res=(float)v1/v2;
	printf("Result is %f\n",res);

	res=v1/(float)v2;
	printf("Result is %f\n",res);
}
