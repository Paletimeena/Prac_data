#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char ch,str[30];
	fp =fopen("text.txt","r+");
	if(fp == NULL)
	{
		printf("file not found\n");

	}
	strcpy(str,"\ntrying to append\n");
	ch=fgetc(fp);
	while(ch !=EOF){
		printf("%c",ch);
		ch =fgetc(fp);

	}
	rewind(fp);	
	fputs(str,fp);
//	rewind(fp);	
	ch=fgetc(fp);
	while(ch !=EOF){
		printf("%c",ch);
		ch =fgetc(fp);

	}
	fclose(fp);



}
