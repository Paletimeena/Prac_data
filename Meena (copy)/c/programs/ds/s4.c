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
	int len , i;// data;
	printf("enter the length of list\n");
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{

		start = (NODE *)malloc(sizeof(NODE));
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
