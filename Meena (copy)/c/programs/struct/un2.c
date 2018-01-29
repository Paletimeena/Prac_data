#include<stdio.h>
union tb{

	char ch[2];
	short int sint;
	};

int main()
{
	union tb tbls;
//	tbls.ch[0]=50;
//	tbls.ch[1]=100;
	tbls.sint =0x1234;
	printf("%d %d %d %ld\n",tbls.ch[0],tbls.ch[1],tbls.sint,sizeof(tbls));
	printf("%x %x %x %ld\n",tbls.ch[0],tbls.ch[1],tbls.sint,sizeof(tbls));




return 0;

}
