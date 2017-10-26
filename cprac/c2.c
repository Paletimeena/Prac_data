#include<stdio.h>

int sum(int a, int b)
{
	return a+b;

}
int main()
{
	/*
	char st[]="meenapaleti";
	int i;
	sum()
	printf("str %c \n",st[0]);
	for(i = 0;st[i] !='\0'; i++)
	printf("%d\n",i);*/
	int num,res;
	a:
	printf("Please enter the number\t");
	scanf("%d",&num);
	if(num<0)
		goto a;
	else
		res=sum(10,num);
	printf("%d\n",res);

	return 0;
}
/*
!a
sizeof(a)
~a
a&&b
*/