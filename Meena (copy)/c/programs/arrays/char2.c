#include<stdio.h>
int main()
{
char myarray[]={96,97,98,99,100,101};
	int sizearr,index;
	sizearr = sizeof(myarray);
	printf("size of the array is %d\n",sizearr);
	for(index = 0; index < 5; index++)
	{
    		printf("%p %d\n",&myarray[index],myarray[index]);
	}

return 0;


}
