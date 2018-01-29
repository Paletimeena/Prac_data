#include<stdio.h>
int main()
{
	int myarray[]={10,20,30,40,50,60,70,80,90,100};
	int sizearr,index;
	sizearr = sizeof(myarray);
	printf("size of the array is %d\n",sizearr);
	for(index = 0; index <10; index++)
	{
    		printf("%p %d\n",&myarray[index],myarray[index]);
	}

return 0;


}
