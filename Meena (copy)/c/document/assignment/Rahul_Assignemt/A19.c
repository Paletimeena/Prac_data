#include<stdio.h>
int main()
{
	char val,res;
	int val1,res1;
	short int val2,res2;
	long int val3,res3;
	val=15;
	res=(val<<3);
	printf("Result of char is \t%d\n",res);
	res=(res>>4);
	printf("Result of char is \t%d\n",res);

	val1=75;
	res1=(val<<1);
	printf("Result of int is \t%d\n",res1);
	res1=(res1>>3);
	printf("Result of int is \t%d\n",res1);

	val1=15;
	res2=(val<<4);
	printf("Result of short int is \t%hd\n",res2);
	res2=(res2>>3);
	printf("Result of short int is \t%hd\n",res2);

	val1=75;
	res3=(val<<5);
	printf("Result of long int is \t%ld\n",res3);
	res3=(res3>>3);
	printf("Result of long int is \t%ld\n",res3);
}
