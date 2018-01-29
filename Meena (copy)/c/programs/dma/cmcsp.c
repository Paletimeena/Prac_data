#include<stdio.h>
#include<stdlib.h>
int * mymalloc(int num)
{	
	int *ptr,index;
 	ptr = (int *)malloc(num*sizeof(int));
        if(ptr == NULL)
        {
                printf("Error\n");
                return NULL;
        }
        for(index=0;index<num;index++)
                *(ptr+index)=index+1;
return ptr;

}
int * mycalloc(int num,int size)
{
	int *ptr,index;
        ptr = (int *)calloc(size,num);
        if(ptr == NULL)
        {
                printf("Error\n");
                return NULL;
        }
        for(index=0;index<num;index++)
                *(ptr+index)=index+1;
return ptr;    
}  
int* call(int num,char ch,int size)
{
	int *ptr;
	printf("switch\n");
	switch(ch){
	
		case 'm':
			printf("malloc\n");
			ptr = mymalloc(num);
			break;
		case 'c':
			ptr = mycalloc(num,size);
			break;
		}
	return ptr;

}
int main()
{
	int *ptr,index,num,size;
	int * (*myptrfun)(int,char,int);
	char ch; 
	printf("enter the number of bytes need to be allocated\n");
	scanf("%d",&num);
	printf("choose\n");
	printf("m: malloc\n");
	printf("c: calloc\n");
	scanf("\n%c",&ch);
	size = sizeof(int);
	myptrfun = call;
	ptr = (*myptrfun)(num,ch,size);
        if(ptr == NULL)
        {
               // printf("Error\n");
                return 1;
        }
        for(index=0;index<num;index++)
               printf("num: %d\t",*(ptr+index));

	free(ptr);
	printf("\n");
return 0;
}

