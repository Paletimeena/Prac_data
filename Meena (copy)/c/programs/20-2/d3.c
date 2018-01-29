#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;

};

void print(struct node *n)
{
	while (n != NULL)
	{
	printf("%d \n", n->data);
	n = n->next;
	}

}

int main()
{
	struct node* head = NULL;
	struct node* temp = NULL;
	struct node* current = NULL;
	int i,n,k;
	printf("enter the length");
	scanf("%d",n);
	for(i=0;i< n;i++)
		{
		printf("enter the number \n");
		scanf("%d", k);		
                temp = (struct node*)malloc (sizeof(struct node));
		temp->data = p;
		if(i == 0)
			{
			temp->next = NULL;
			head = temp;
			current = temp;	
			}
		else{
		
			while(current != NULL)
			{
			current = temp->next;
			 
				
			}
		    }
       		temp->next = NULL;
		}


}
