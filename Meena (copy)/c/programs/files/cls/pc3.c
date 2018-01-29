#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define islower(ch) (ch>=97 && ch<=122)
#define ISUPPER(ch) (ch>=65 && ch<=90)
#define ISALPHA(ch) ((ch>=97 && ch<=122) || (ch>=65 && ch<=90))
int main()
{
	if(islower('c')==TRUE)
		printf("c is lower\n");
	if(ISUPPER('A')==TRUE)
		printf("A is upper\n");
	if(ISALPHA('m')==TRUE)
		printf("m is alphabet\n");

return 0;
}
