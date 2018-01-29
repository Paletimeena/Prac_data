#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define islower(ch) (ch>=97 && ch<=122)
int main()
{
	if(islower('c')==TRUE)
		printf("c is lower\n");
	else
		printf("c is not lower\n");

return 0;
}
