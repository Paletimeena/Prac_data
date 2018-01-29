#include<stdio.h>
int main()
{
	int v1,v2,v3,res;
	printf("Please enter the number\n");
	scanf("%d%d%d",&v1,&v2,&v3);
	res=v1&&v2;
	printf("Result is :%d\tV1 :%d\tV2 :%d\tv3 :%d\t\n",res,v1,v2,v3);
	res=(v1<=v2)&&(v2<=v3)||(v3<=v1);
	printf("Result is :%d\tV1 :%d\tV2 :%d\tv3 :%d\t\n",res,v1,v2,v3);
	res=(v1>=v2)||(v1=v2)&&(v2=10);
	printf("Result is :%d\tV1 :%d\tV2 :%d\tv3 :%d\t\n",res,v1,v2,v3);
	res=(v1<v2)&&(v1-5)||(v2+10);
	printf("Result is :%d\tV1 :%d\tV2 :%d\tv3 :%d\t\n",res,v1,v2,v3);
	res=!((v1>v2)&&(v3=v2));
	printf("Result is :%d\tV1 :%d\tV2 :%d\tv3 :%d\t\n",res,v1,v2,v3);
}
