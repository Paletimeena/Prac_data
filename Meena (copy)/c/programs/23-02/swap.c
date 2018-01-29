
#include<stdio.h>
int main()
{
int val,v1,v2,res;
val=85;
v1=val & 170;
v2=val & 85;
v1=v1>>1;
printf("v1 is... %d\n",v1);
v2=v2<<1;
printf("v2 is ....%d\n",v2);
res=v1+v2;
printf("swaped values are %d\n",res);
return 0;

}
