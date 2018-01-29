#include<stdio.h>
int main()
{
	int v1;
	printf("Please enter the number in from of octal\n");
	scanf("%o",&v1);
	printf("Octal formate is\t%o\nDecimal formate is\t%d\nHexa decimal formate is\t%x\n",v1,v1,v1);

	printf("Please enter the number in from of decimal\n");
	scanf("%d",&v1);
	printf("Octal formate is\t%o\nDecimal formate is\t%d\nHexa decimal formate is\t%x\n",v1,v1,v1);

	printf("Please enter the number in from of hexadecimal\n");
	scanf("%x",&v1);
	printf("Octal formate is\t%o\nDecimal formate is\t%d\nHexa decimal formate is\t%x\n",v1,v1,v1);
}
