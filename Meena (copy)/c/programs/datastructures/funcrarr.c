#include<stdio.h>
int front =-1,rear=-1,arr[5],size,val;
void insert(int val)
{	printf("\n");
	if(rear+1 == front) {
		printf("overflow\n");
		return;
	}
	if(front==-1)
		front=0;
	rear = (rear+1)%size;
	arr[rear]=val;
}

void delete()
{
	if(front ==-1)
		printf("underflow\n");
	else
	{
		val = arr[front];

		if (front == rear)
			front = rear = -1;
		else
			front = (front + 1) % size;
	}
}

void display()
{	printf("\n");
	int index=0;
	if(rear<front)
	{
		for(index=front;index<size;index++)
			printf("%d\t",arr[index]);
		for(index=0;index<rear+1;index++)
			printf("%d\t",arr[index]);
		printf("rear<front\n");	
	}
	else
	{
		for(index=front;index<=rear;index++)
			printf("%d\t",arr[index]);
		printf("rear>front\n");
	}
}

int main()
{	int index =0;
	size = sizeof(arr)/sizeof(int);
	insert(100);
	display();
	insert(200);
	display();
	insert(300);
	display();
	insert(400);
	display();
	insert(500);
	display();
	delete();
	display();
	delete();
	display();
	insert(600);
	display();
	insert(700);
	display();
	printf("\n");

//	for(index=front;index<size;index++)
//		printf("%d\t",arr[index]);



return 0;
}
