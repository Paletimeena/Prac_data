#include<stdio.h>
void sumsqrcube()
{
	int i=0,sum=0,cube=0,sqr=0;
	for(i =0 ;i<=10;i++)
	{
		sum += i;
		sqr += i*i;
		cube += i*i*i;
	}
		printf("sum : %d\n",sum);
		printf("sqr : %d\n",sqr);
		printf("cube : %d\n",cube); 



}
int main()
{
	sumsqrcube();
	

return 0;
}
