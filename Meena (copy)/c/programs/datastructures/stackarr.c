#include<stdio.h>
#include<stdlib.h>
int main()
{

	int arr[5]={},top=-1,size,op,index,num,element;
	size = sizeof(arr)/sizeof(int);
		while(1)
		{
		printf("\nplease select\n");
		printf("1:push\n");
		printf("2:pop\n");
		printf("3:display\n");
		printf("4:exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				if(top>=size-1)
				{
				for(index=0;index<=top;index++)
					printf("%d\t",arr[index]);
				printf("\nstack overflow\n");
				break;
				}
				printf("please enter the number\n");
				scanf("%d",&num);
			       top++;
			       arr[top]=num;
			       break;
			       
			case 2:	if(top==-1)
				{
					printf("stack underflow\n");
					break;

				}
				element=arr[top];
			      	top--;
				break;
			case 3:
				for(index=0;index<=top;index++)
					printf("%d\t",arr[index]);

				break;
			case 4: exit(0);
			default:
				printf("wrong entry\n");
		}
	
	}
	
return 0;
}
