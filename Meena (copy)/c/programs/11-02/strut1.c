#include<stdio.h>
#include<string.h>
struct emp
{
	char name[30];
	int id;
};

int main()
{
struct emp e1;
strcpy(e1.name,"meena");
e1.id=847;
printf("%u id no \n ",&e1.id);
printf("%s name of the empolyee",e1.name);

}
