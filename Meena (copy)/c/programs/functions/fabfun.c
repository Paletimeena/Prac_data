#include<stdio.h>
void fabonic(int range)
{
	int a=0,i=1,b=1,fabonic=0;
	while(i<=range)
	{
		printf("%d\t",fabonic);
		fabonic = a + b;
		a = b;
		b = fabonic;
		i++;
	}

	printf("\n");
}

void main()
{
	int x;
	printf("enter the fibonic range you want\n");
	scanf("%d",&x);
	fabonic(x);
}
