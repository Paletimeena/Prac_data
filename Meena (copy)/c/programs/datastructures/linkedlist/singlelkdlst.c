#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *head=NULL,*temp = NULL;
int insertnumstart(int num)
{
//	printf("start\n");
	NODE *new=NULL;
	new = (NODE*)malloc(sizeof(NODE));
	if(new == NULL)
		printf("malloc failure\n");
	new->data = num;
	new->next = NULL;
	head = new;
		

return 0;
}

int insertlast(int num)
{	
//	printf("end\n");
	NODE *new=NULL;
	new =(NODE*)malloc(sizeof(NODE));
	if(new == NULL)
		printf("malloc failure\n");
	new->data = num;
	new->next =NULL;
	temp = head;
	while(temp->next !=NULL)	
		temp = temp->next;

	temp->next=new;
//	temp=new;
	

return 0;
}
int insertbfnode(int elem,int num)
{
	NODE *temp=NULL,*new = NULL;
	new = (NODE*)malloc(sizeof(NODE));
	temp = head;
	new->data = num;
	new->next = NULL;
	while(temp->next->data != elem)
		temp = temp->next;
	new->next = temp->next;
	temp->next = new;

	
return 0;
}

int insertafternode(int elem,int num)
{
	NODE *new=NULL,*temp = NULL;
	temp = head;
	new = (NODE*)malloc(sizeof(NODE));
	new->data = num;
	new->next = NULL;
	while(temp->data !=elem)
		temp=temp->next;
	new->next = temp->next;
	temp->next=new;
	
return 0;
}
int deletnode(int elem)
{
	NODE *temp=NULL;
	temp = head;
	while(temp->next->data != elem)
		temp=temp->next;
	temp->next=temp->next->next;


return 0;
}

void display()
{	
//	printf("display\n");
	NODE *temp=NULL;
	temp = head;
	while(temp !=NULL)
	{
		printf("%d\t",temp->data);
		temp = temp->next;
		
	}
	printf("\n");
}


int main()
{
	insertnumstart(20);
	display();
	insertlast(50);
	display();	
	insertbfnode(50,30);
	display();
	insertafternode(30,40);
	display();
	deletnode(40);
	display();
return 0;
}
