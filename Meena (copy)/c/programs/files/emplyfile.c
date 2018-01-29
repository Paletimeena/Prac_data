#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	struct emp{
		char name[20];
		int empid;
		char grade[4];

	}e;

	fp=fopen("empolyee.txt","r");
	if(fp==NULL)
		printf("file not found\n");
	while(fscanf(fp,"%s %d %s",e.name,&e.empid,e.grade)!=EOF);
		printf("%s %d %s",e.name,e.empid,e.grade);
	printf("\n");
	fclose(fp);
	return 0;

}
