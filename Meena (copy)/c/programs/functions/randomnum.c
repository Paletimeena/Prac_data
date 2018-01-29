#include<stdio.h>
int myrandomnum()
{
	int rnum,i;
	for(i =0;i<10;i++)
		rnum = rand()%100;
	return rnum;

}

void main()
{
	int num;
	num = myrandomnum();
	printf("random number is: %d\n",num);
}
