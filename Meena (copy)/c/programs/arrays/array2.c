#include<stdio.h>
int main()
{
	int myarray[20]={10,20,30,40,50,60,70,80,90,100};
	int sizearr,index,len;
	sizearr = sizeof(myarray);
	len = sizearr / 4;
	printf("size of the array is %d\n",sizearr);
	for(index = 0; index < len; index++)
	{
    		printf("%p %d\n",&myarray[index],myarray[index]);
	}

return 0;


}
