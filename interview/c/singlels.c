#include<stdio.h>
#include<stdlib.h>

struct nd
{
	int data;
	struct nd * next;

};
typedef struct nd NODE;


int push(int val,NODE **head)
{
	
	NODE *new=NULL,*temp=NULL;
	new=(NODE*)malloc(sizeof(NODE));
	new->data=val;
	new->next=NULL;
	temp=*head;	
	if(*head==NULL)
	{
		*head=new;
	}
	else{
	while(temp->next){
			temp=temp->next;
		}
		temp->next=new;
	}
		
	
return 0;
}

int insert(int num,int position,NODE **head){

	NODE *in=*head,*new=NULL;
	int p=1;
	new=(NODE*)malloc(sizeof(NODE));
	new->data=num;
	new->next=NULL;
	while(p < position-1){

		in=in->next;p++;
	}
	new->next=in->next;
	in->next=new;
return 0;
}

void display(NODE *head){

	NODE *t=head;
	while(t){
		printf("%d \t",t->data);
		t=t->next;}
printf("\n");
}

int main()
{
	NODE *head=NULL;

	push(10,&head);
	display(head);
	push(20,&head);
	display(head);
	push(40,&head);
	display(head);
	push(50,&head);
	display(head);
	insert(30,3,&head);
	display(head);
return 0;
}






