//reverse the string without using string operations

#include<stdio.h>

int main()
{
char name[20];int l;
printf("enter the string to reverse\n");
scanf("%s",&name);
for(int i= 0;name[i] !='\0';i++)
	l=i;
		


for(int i=0;i<l/2;i++)
	{
		char r;
		r=name[i];
		name[i]=name[l-i];
		name[l-i]=r;

	}


printf("string got reversed %s\n",name);

return 0;

}
