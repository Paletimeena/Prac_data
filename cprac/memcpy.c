#include<stdio.h>
#include<string.h>

int main()
{
 char name1[15]="meenapaleti",name2[5],name3[10];
 int res=0;
 printf("%s\n",name1);
 memcpy(name2,name1,5);
 printf("%s\n",name2);
 strcpy(name3,name1);
 printf("%s\n",name3);
 res=strcmp(name3,name1);
 printf("%d\n",res);

return 0;
}
