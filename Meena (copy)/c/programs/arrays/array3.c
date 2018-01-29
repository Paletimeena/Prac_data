#include<stdio.h>
int main()
{
//	int myarray[20]={10,20,30,40,50,60,70,80,90,100};
	int i,len,num,total = 0;
	printf("enter the len");
	scanf("%d",&len);
	int array[len];
	for(i=0;i<len;i++)
	{	printf("enter the number\n");
		scanf("%d",&num);
		array[i]=num;
	}
	//int sizearr,index,len;
	//sizearr = sizeof(myarray);
	//len = sizearr / 4;
	//printf("size of the array is %d\n",sizearr);
	for(i= 0; i < len; i++)
	{
    		printf("%p %d\n",&array[i],array[i]);
		total += array[i];
	}
	printf("sum of array elements %d\n",total);
return 0;


}
