#include<stdio.h>
int main()
{
	int array[10],i,diff;
	for (i=0;i<10;i++)
	{	
		array[i]=(i+1)*100;
	
	}
	for(i=0;i<10;i++)
	{
		printf("%p %d\n",&array[i],array[i]);

	}
	diff = &array[0] - &array[9];
	printf("%d\n",diff);

return 0;

}
