//reverse the string without using string operations

#include<stdio.h>

int main()
{
char name[20];int l;
char *nameptr=name;
printf("enter the string to reverse\n");
scanf("%s",&name);

while(*nameptr !='\0')
	printf("%c",*nameptr++);



/***
for(int i= 0;&nameptr[i] !='\0';i++)
	l=i;
		


for(int i=0;i<l/2;i++)
	{
		char r;
		r=&ptrname[i];
		&ptrname[i]=&ptrname[l-i];
		&ptrname[l-i]=r;

	}


printf("string got reversed %s\n",name);
***/
return 0;

}
