#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};
typedef struct node NODE;
NODE *top=NULL,*temp = NULL,*new = NULL;
int push(int num)
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
	if(top==NULL)
		new->next =  NULL;
	else
		new->next = top;
	top = new;
//	printf("hi\n");
return 0;
}

int pop()
{
	int numb;
//ODE *temp=NULL;
//	printf("pop is called\n");
	if(top == NULL)
		return 1;
	temp = top;
	top = top->next;
	numb = temp->data;
	free(temp);
	printf(" \nnumber is popped %d\n",numb);
return 0;
}
void display()
{	
//ODE *temp=NULL;
//	printf("dispaly called\n");
	temp = top;
	while(temp != NULL)
	{
		printf("%d\t",temp->data);
		temp = temp->next;
	}
printf("\n");

}



int main()
{
	
	push(20);
	display();
	push(30);
	display();
	push(50);
	display();
	pop();
	display();
	pop();
	display();








return 0;
}
