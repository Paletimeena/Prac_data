#include<stdio.h>
#include<stdlib.h>
int main()
{
	pid_t p1;   //to create process id
	p1 = fork();//to create child
	p1 = fork();
	int a = 1, b = 2, sum;// initilaze the variables
	printf("to check child %d\n",p1);
	if(p1==0)//if p1 = 0 ; indicates child process is created
		{
		sum = a + b;
		printf("child process is created %d\n",sum);
		exit(sum);//child process exits and returns the sum 

		}
	else
		{
		
		//wait(&sum);//waits for the result;
		printf("p1 value asfter the child die %d\n",p1);
		sum >>=8;
		printf("after child process done %d\n",sum);
		printf("just trying ");
	

		}

}

