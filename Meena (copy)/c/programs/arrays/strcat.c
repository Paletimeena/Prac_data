#include<stdio.h>
int main()
{
	char str1[10] = "meena";
	char str2[10] = "paleti";
	char str3[20];
	int i=0,j=0;
	while(str1[i] !='\0')
	{	
		str3[i]=str1[i]; 
		i++;
	}
	while(str2[j] != '\0')
	{
		str3[i]=str2[j];
		i++;
		j++;
	}
	printf("str1: %s\n",str1);
	printf("str2: %s\n",str2);
	printf("str3 : %s\n",str3);	
return 0;
}
