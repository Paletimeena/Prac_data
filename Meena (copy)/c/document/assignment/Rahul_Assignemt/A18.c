#include<stdio.h>
int main()
{
int v1,v2,res;
v1=235;
v2=756;
res=v1&v2;
printf("Result is  %d\n",res);
res=v1|v2;
printf("Result is  %d\n",res);
res=v1^v2;
printf("Result is  %d\n",res);
res=~v1;
printf("Result is  %d\n",res);

v1=0xAB5;
v2=0XCD6;
res=v1&v2;
printf("Result is  %d\n",res);
res=v1|v2;
printf("Result is  %d\n",res);
res=v1^v2;
printf("Result is  %d\n",res);
res=~v1;
printf("Result is  %d\n",res);

v1=0235;
v2=0756;
res=v1&v2;
printf("Result is  %d\n",res);
res=v1|v2;
printf("Result is  %d\n",res);
res=v1^v2;
printf("Result is  %d\n",res);
res=~v1;
printf("Result is  %d\n",res);
}
