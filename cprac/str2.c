#include<stdio.h>
#include<string.h>

int main()
{
	int len1,len2;
	char st1[4]={'H','e','\0','e'};
	char st2[4];
	strcpy(st2,st1);
	printf("%s\n",st2);
	printf("%d \n",strcmp(st1,st2));
	strcat(st2,st1);	
	printf("%s\n",st2);
	printf("%d \n",strcmp(st2,st1));
	len1=strlen(st1);
	len2=strlen(st2);

	printf("%d %d\n",len1,len2);



return 0;
}