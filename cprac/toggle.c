#include<stdio.h>
int main()
{
        int n,bit,t;
        printf("enter a number,bit:\n");
        scanf("%d,%d",&n,&t);
        for(bit =31;bit>=0;bit--)
                printf("%d",(n>>bit)&1);
        printf("\n");
        int res = (n^(1<<t));
	hai(); 
       for(bit =31;bit>=0;bit--)
                printf("%d",(res>>bit)&1);
        printf("\n");
        printf("%d\n",n);
	int r = (n^(1<<t));
	printf("%d\n",r);
	return 0;
}
void hai()
{
printf("hai fun \n");
}
