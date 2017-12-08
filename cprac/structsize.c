#include<stdio.h>

struct date
{
	unsigned int d:5;
	unsigned int m:4;
	unsigned int y;

};

int main()
{
	struct date dt={1,12,2017};
	printf("sizeof struct is: %d\n",sizeof(struct date));
	printf("%d %d %d \n",dt.d,dt.m,dt.y);
	printf("sizeof struct dt :%d\n",sizeof(dt));
return 0;
}


