#include<stdio.h>
int main()
{
	int v1,v2,v3,res;
	printf("Please enter the number\n");
	scanf("%i%i%i",&v1,&v2,&v3);
	res=v1&v2;
	printf("Result is  %d\n",res);
	res=v1|v2;
	printf("Result is  %d\n",res);
	res=v1^v2;
	printf("Result is  %d\n",res);
	res=~(v1^v2);
	printf("Result is  %d\n",res);

	res=v1&v2|v3;
	printf("Result is  %d\n",res);
	res=v1|v2^v3;
	printf("Result is  %d\n",res);
	res=v1^v2&v3;
	printf("Result is  %d\n",res);
	res=~(v1^v3|v2);
	printf("Result is  %d\n",res);

}
