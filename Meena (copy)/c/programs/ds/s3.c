#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* link;
};
typedef struct node NODE;
int main()
{
	NODE *head,*start , *temp;
	int len;
//	printf("enter the length of list\n");
//	scanf("%d",&len);
	start = (NODE *)malloc(sizeof(NODE));
	start -> data = 255;
	start -> link =NULL;
	printf("start data is %d \n", start -> data);
	head = start;
	temp=start;
	start = (NODE *)malloc(sizeof(NODE));
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
