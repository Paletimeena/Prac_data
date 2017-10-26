#include<stdio.h>
static int a = 50;
int sum(int b)
{
	a++;//51
	b++;
	printf("%d\t%d\n",a,b);
	return a+b;
}
int main()
{
	int b = 20,res;
	while(a<55)
	{	
		printf(" a value %d \n",a);
		res=sum(b);//50,20//51,20
		printf("res value is : %d\n",res);
	}	
return 0;
}


//51,21
//72
//52,21
//73
//53,21
//74
//54,21
//75
//55,21
