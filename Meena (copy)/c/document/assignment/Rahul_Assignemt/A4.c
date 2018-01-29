#include<stdio.h>
int main()
{
	int v1,res;
	v1=2;
	res=v1++;
	printf("%d\n",res);
	res=++v1;
	printf("%d\n",res);
	res=(v1++,++v1,++v1);
	printf("%d\n",res);
	res=v1--;
	printf("%d\n",res);
	res=--v1;
	printf("%d\n",res);
	res=(v1--,++v1,--v1);
	printf("%d\n",res);

}
