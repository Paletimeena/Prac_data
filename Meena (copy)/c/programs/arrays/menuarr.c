#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10]={},num,option,position,value,index=0,present =0;
//	printf("%d\n",arr[0]);
	while(1)
	{
	printf("enter what operation need to be performed\n");
	printf("1: insertion\n");
	printf("2: deletion\n");
	printf("3: display\n");
	printf("4 : exit\n");
	scanf("\n%d",&option);	
	printf("\n");
	switch(option){
	
	case 1:
		if(arr[9] != 0)
		{		
		printf("array is filled completly\n ");					
		break;					
		}
		else
		{	
			printf("enter the position\n");
			scanf("%d",&position);
			if(position>=0 && position<=9)
			{
				printf("enter the value\n");
				scanf("%d",&value);
				for(index=0;index<10;index++)
				{
					if(arr[index]==0)
						break;
				}
									
				for(index;index>position;index--)
					arr[index]=arr[index-1];						
				arr[index]=value;	


			}
			else
				printf("wrong position\n");
		}
		break;
		
	case 2: 
		printf("choose\n");
		printf("1:position\n");
		printf("2:value\n");
		scanf("%d",&num);
		if(num ==1)
		{
		printf("enter the psition\n");
		scanf("%d",&position);
		for(index=position;index<10;index++)
			arr[index]=arr[index+1];
		}
		else if(num==2)
		{	
		printf("enter the value\n");
		scanf("%d",&value);
			for(index=0;index<10;index++)
			{
				if(arr[index] == value)
				{
					present = 1;
					break;	
				}

			}
			if(present == 0)
				printf("element not found\n");
			else if(present == 1)
			{
				for(index;index<10;index++)
					arr[index]=arr[index+1];
				present =0;
			}

		}

		else
			printf("wrong entery\n");
		break;
	case 3:
		for(index=0;index<10;index++)
			printf("%d  ",arr[index]);
		printf("\n");
		break;
	
	case 4:exit(0);	

	}	
}

return 0;
}
