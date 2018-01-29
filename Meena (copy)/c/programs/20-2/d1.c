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
struct node* second = NULL;

head = (struct node*)malloc (sizeof(struct node));
second = (struct node*)malloc (sizeof(struct node));

head->data = 1;
head->next = second;

second->data = 5;
second->next = NULL;

print(head);
}
