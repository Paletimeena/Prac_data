#include<stdio.h>
int main()
{
int v1, v2 ,v3;
int res;
v1 = 50;
v2 = 67;
v3 = 80;
res=(v1>v2 ? v1: (v2>v3 ? v2:v3));
printf("%d \n", res);
return 0;
}
