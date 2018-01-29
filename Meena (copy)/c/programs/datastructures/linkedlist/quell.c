#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};
typedef struct node NODE;
NODE *front=NULL,*rear = NULL,*temp = NULL,*new = NULL;
int insert(int num)
{	
//ODE * new=NULL;
//	printf("push fun called\n");
	new = (NODE*)malloc(sizeof(NODE));
	if(new == NULL)
	{
		printf("malloc failure\n");
		return 1;

	}	
	new->data = num;
	new->next = NULL;;
	if(rear != NULL)
		rear->next = new;
	rear = new;
	if(front == NULL)
		front = rear;
//	printf("hi\n");
return 0;
}

int delete()
{
	int numb;
//ODE *temp=NULL;
//	printf("pop is called\n");
	if(front == NULL)
		return 1;
	temp = front;
	front= front->next;
	numb = temp->data;
	free(temp);
//	printf(" \nnumber is popped %d\n",numb);
return 0;
}
void display()
{	
//ODE *temp=NULL;
//	printf("dispaly called\n");
	temp = front;
	while(temp != NULL)
	{
		printf("%d\t",temp->data);
		temp = temp->next;
	}
printf("\n");

}



int main()
{
	
	insert(10);
	display();
	insert(20);
	display();
	insert(38);
	display();
	delete();
	display();
	delete();
	display();








return 0;
}
