#include<stdio.h>


int fun(int *a,int b)
{
	;
	printf("%p \n",&a );
	//*a= ++*a;

	//b=b++;
	//printf("%d \t %d \n",a,b);
return 0;
}


int main()
{

	int a = 10 ,b=10;
	fun(&a,b);
	printf("%d \t %d \n",a,b);
return 0;
}