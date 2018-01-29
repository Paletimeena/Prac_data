#include<stdio.h>
#include<stdlib.h>
int *mymalloc(int num)
{	
	int *ptr,index;
 	ptr = (int *)calloc(4,num);
        if(ptr == NULL)
        {
                printf("Error\n");
                return NULL;
        }
        for(index=0;index<num;index++)
                *(ptr+index)=index+1;
return ptr;

}
int *mycalloc(int num)
{
	int *ptr,index;
        ptr = (int *)calloc(sizeof(int),num);
        if(ptr == NULL)
        {
                printf("Error\n");
                return NULL;
        }
        for(index=0;index<num;index++)
                *(ptr+index)=index+1;
return ptr;    
}  
int main()
{
	int *ptr,index,num,size;
	printf("enter the number of bytes need to be allocated\n");
	scanf("%d",&num);
	ptr =mymalloc(num);
        if(ptr == NULL)
        {
               // printf("Error\n");
                return 1;
        }
        for(index=0;index<num;index++)
               printf("num: %d\t",*(ptr+index));

	free(ptr);
	printf("\n");
	ptr =mycalloc(num);
        if(ptr == NULL)
        {
        //        printf("Error\n");
                return 1;
        }
        for(index=0;index<num;index++)
               printf("num: %d\t",*(ptr+index));
	free(ptr);
	printf("\n");
return 0;
}

