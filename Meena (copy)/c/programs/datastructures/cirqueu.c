#include<stdio.h>
#include<stdlib.h>
int main()
{

	int arr[5],top=-1,rear=-1,front=-1,size,op,index,num,element;
	size = sizeof(arr)/sizeof(int);
		while(1)
		{
		printf("\nplease select\n");
		printf("1:Insert\n");
		printf("2:delet\n");
		printf("3:display\n");
		printf("4:exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				if(rear>=size-1 && front == rear+1)
				{
				for(index=front;index<=rear;index++)
					printf("%d\t",arr[index]);
				printf("\noverflow\n");
				break;
				}
				if(rear == size-1 && front >0)
				{

					rear = (rear+1)%size;
					printf("rear ::: %d\n",rear);
					break;
				}
				if(front>0 && rear <size-1)
				printf("please enter the number\n");
				scanf("%d",&num);
			       rear++;
			       arr[rear]=num;
			       if(rear==0)
					front++;
			  //     push(num);
			       break;
			       
			case 2:	if(front==-1 || front ==rear+1)
				{
					printf("queue underflow\n");
					break;

				}
			//	pop(arr[top]);
				element=arr[front];
			      	front++;
				break;
			case 3:
				for(index=front;index<=rear;index++)
					printf("%d\t",arr[index]);

				printf("rear = %d\n",rear);
				break;
			
			case 4: exit(0);
			default:
				printf("wrong entry\n");
		}
	
	}
	
return 0;
}
