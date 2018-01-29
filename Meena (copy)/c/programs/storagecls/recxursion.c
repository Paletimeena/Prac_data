#include<stdio.h>
void fun(int num)
{
	if (num> 0)
	{	
		fun(num - 1);
		printf("%p %d\n",&num,num);
	}
}
void main()
{
	int num=3;
	fun(num);
}
