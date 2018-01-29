#include<stdio.h>
int main()
{
	char myarray[]="meenapaleti";
	int sizearr,index;
	sizearr = sizeof(myarray);
	printf("size of the array is %d\n",sizearr);
	for(index = 0; index < sizearr -1; index++)
	{
    		printf("%p %c\n",&myarray[index],myarray[index]);
	}

return 0;


}
