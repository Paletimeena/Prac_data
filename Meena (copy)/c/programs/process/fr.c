#include<stdio.h>
#include<stdlib.h>


int main()
{
	pid_t p1;
	p1 = fork();
	int res;
	int v = 1,v1 = 3,sum;
	if(p1 == 0)
	{
		sum = v1+v;
		printf("%d\n",sum);
		exit(sum);
		printf("child\n");
	}
	else
	{
		wait(sum);
		sum >>=8;
		printf("%d\n",sum);
	}
}
