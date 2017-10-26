#include<stdio.h>

int main()
{	
	int aar[3]={1,2,3};
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];//i = 2
    j = a[1]++;//2
    m = a[i++];//15
    printf("%d, %d, %d", i, j, m);
    return 0;

	//a = ++aar[1];
	//printf("array %d\n",a);
}