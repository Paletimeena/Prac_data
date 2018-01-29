#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;

};
typedef struct node NODE;
NODE *insert(int num,NODE *rear,NODE *front)
{
	NODE *new=NULL;
	new = (NODE*)malloc(sizeof(NODE));
	if(new == NULL)
		printf("malloc failure\n");
	new->data = num;
	new->next = NULL;
	if(rear == NULL)
	{
		rear->next = NULL;
		rear = new;
		front=new;
	}
//	else
//	{		
//	rear->next = new;
//	rear = new;
	return front;
	}
//return ;
}

void display(NODE *front)
{
	NODE *temp = NULL;
	temp = front;
	while(temp !=NULL)
	{
	printf("%d\t",temp->data);
	temp=temp->next;
	}
}




int main()
{
	NODE * front = NULL,*rear = NULL;
front=	insert(10,rear,front);
	display(front);
front=	insert(20,rear,front);
	display(front);




return 0;

}
