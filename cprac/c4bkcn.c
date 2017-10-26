#include<stdio.h>

int main()
{
	int num = 0;
	while(num < 15)
	{	

		num +=1;
		if(num == 5)
			continue;
		
		else if (num == 10)
			break;

		printf("%d\n",num);
		
		
	}	
	return 0;
}