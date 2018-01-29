#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *ls;
	struct node *rs;
	

};
typedef struct node NODE;
NODE *root=NULL;
int create(int num)
{	
	NODE* new,*node=NULL,*parent=NULL;
	new = (NODE*)malloc(sizeof(NODE));
	new->data = num;
	new->ls=new->rs=NULL;
	node = root;
	parent =node;
	if(new == NULL)
		printf("malloc failure\n");
	if(root == NULL)
	{
		root = new;
		node = new;
	}
	while(node != NULL)
	{
		if(node->data > num)
			node = node->ls;
		else
			node = node->rs;
	}
		if(parent->data > num)
			node->rs=new;
		else
			node->ls = new;
return 0;	

}


int display(NODE *node)
{
	//NODE* node=NULL;
//	parent=child=root;
//	node = root;
//	while(1)
//	{

	if(node != NULL)
	{
	printf("%d\n",node->data);
//		printf("tree is empty\n");
//	return 0;
	display(node->ls);
//	c=0;	
	}
//	else
//		return 1;
//	printf("%d\n",c);
//	display(node->rs);
//rintf("%d\n",node->data);
return 0;
}

int main()
{
	NODE *travel = NULL;
	
//	travel = root;
	create(25);
	travel = root;
//	display();
	create(30);
	create(10);
	travel = root;
	display(travel);





return 0;
}
