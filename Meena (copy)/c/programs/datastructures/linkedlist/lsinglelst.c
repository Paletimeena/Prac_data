#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
typedef struct node NODE;
//NODE *head=NULL,*temp = NULL;
NODE* insertnumstart(NODE* head,int num)
{
//	printf("start\n");
	NODE *new=NULL;
	new = (NODE*)malloc(sizeof(NODE));
	if(new == NULL)
		printf("malloc failure\n");
	new->data = num;
	new->next = NULL;
	head = new;
		

return head;
}

NODE* insertlast(NODE *head,int num)
{	
//	printf("end\n");
	NODE *new=NULL,*temp=NULL;
	temp = head;
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
	

return head;
}
NODE* insertbfnode(NODE *head,int elem,int num)
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

	
return head;
}

NODE* insertafternode(NODE* head,int elem,int num)
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
	
return head;
}
NODE* deletnode(NODE* head,int elem)
{
	NODE *temp=NULL;
	temp = head;
	while(temp->next->data != elem)
		temp=temp->next;
	temp->next=temp->next->next;


return head;
}

NODE* display(NODE* head)
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
return head;
}


int main()
{
	NODE* head=NULL;
	head = insertnumstart(head,20);
	head = display(head);
	head = insertlast(head,50);
	head = display(head);	
	head = insertbfnode(head,50,30);
	head = display(head);
	head = insertafternode(head,30,40);
	head = display(head);
	head = deletnode(head,40);
	head = display(head);
return 0;
}
