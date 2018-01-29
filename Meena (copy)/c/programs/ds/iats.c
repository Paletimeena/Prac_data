#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* link;
};
typedef struct node NODE;
void append(NODE **addr,int new_data)
{
	start = (NODE*)malloc(sizeof(NODE));
	start->data = new_data;
	star -> link = NULL;
	if(* addr == NULL)
	{
	start = addr;
	}
	

}

int main()
{
	NODE *head=NULL,*start,*ref_node = NULL;
	append(&ref_node ,20);
	











= (NODE *)malloc(sizeof(NODE));
		printf("enter the data\n");
		scanf("%d",& start->data);
		//start->data = data;
		start->link =NULL;
		printf("start data is %d \n", start -> data);
		if(i==0)
		{
			head = start;
			temp = start;
		}
		else
		{
			temp->link = start;
			temp = start;
		}
	}
	
	while(head != NULL)
	{
	 	printf("head traverse %d \n",head ->data);
		head = head->link;
		
	
	}

	printf("do you want insert node enter y if\n");
	scanf("%c",yes);
	if(yes==y)
	{
		printf("enter the node address and data\n");
		scanf("")
	}
}	

/*
	temp=start;
//	start = (NODE *)malloc(sizeof(NODE));
	start -> data =55;
	start -> link =NULL;
	temp->link=start;
	printf("next node data is %d \n", start -> data);
	temp = start;
	start = (NODE *)malloc(sizeof(NODE));
	start -> data =2955;
	start -> link =NULL;
	temp -> link =start;
	printf("next node data is %d \n", start -> data);
	while(head != NULL)
	{
	 	printf("head traverse %d \n",head ->data);
		head = head->link;
		
	}
	return 0;
}
*/
