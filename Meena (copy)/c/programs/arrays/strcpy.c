#include<stdio.h>
int main()
{
	char str1[20]="meenapaleti";
	char str2[20];
	int i=0;
//	for(i=0;i!='\0';i++)	
	while(str1[i] !='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	printf("length of str1 : %d\n",i);
	printf("str1: %s\n",str1);
	printf("str2: %s\n",str2);

return 0;
}
