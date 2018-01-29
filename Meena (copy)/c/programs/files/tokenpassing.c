#include<stdio.h>
#define PASTE(v1,v2) v1##v2
int main()
{
int v1,v2,v1v2;
v1 =10;v2=20;
v1v2=v1*v2;
printf("%d\n",PASTE(v1,v2));

return 0;
}
