#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp =fopen("text.txt","r");
	if(fp == NULL)
	{
		printf("file not found\n");

	}
	ch = fgetc(fp);
	while(ch !=EOF){
		printf("%c",ch);
		ch =fgetc(fp);

	}
	fclose(fp);



}
