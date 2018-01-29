#include<stdio.h>
int main()
{

	int array[]={5,6,8,4,1,9,0};
	int len,index;
	len = sizeof(array);
	len = len / 4;
	for(index=0;index < len;index++)
	{
		printf("hello: %p %d\n",& index[array],index[array]);
		printf("array : %p %d\n",&array[index],array[index]);
	}

return 0;
}
