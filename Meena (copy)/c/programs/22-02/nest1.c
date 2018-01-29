#include<stdio.h>
int main()
{
	int m1,m2,m3,avg;
	printf("enter the 3 test marks\n");
	scanf("%d %d %d",&m1,&m2,&m3);
	avg=(m1+m2+m3)/3;
	printf("avg is %d\n",avg);
	if(avg >=50)
		//printf("your in T10\n")
		if(avg >=70)
		//	printf("your in T20\n");
	 		if(avg >=80)
				printf("your in T10\n");
	 		else
				printf("your in T20\n");
		else
			printf("your in N50\n");
	else
		printf("your r in B20\n");

	return 0;
}

