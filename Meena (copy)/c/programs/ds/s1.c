#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* link;
};
typedef struct node NODE;
int main()
{
	NODE *start;
	start = (NODE *)malloc(sizeof(NODE));
	start -> data = 255;
	start -> link =NULL;
	printf("start data is %d \n", start -> data);
	return 0;
}
