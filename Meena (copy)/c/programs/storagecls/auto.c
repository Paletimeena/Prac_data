#include<stdio.h>
void main()
{
	auto int v1;
	int v2;
	printf("garabage : %d %d\n",v1,v2);//00
	v1 = 10;
	v2 = 20;
	{
		int v1 = 20;
		v1++;
		v2++;
		//printf("increment v1=21;v2=21 : %d %d\n",v1,v2);
		{
		       int v1 = 30;
			int v2 = 50;
			v1--;
			v2--;
		
			printf("decrement v1=29;v2=50 : %d %d\n",v1,v2);
		}
		printf("increment v1=21;v2=21 : %d %d\n",v1,v2);
			

	}
	
	printf("try  v1=10;v2=20 : %d %d\n",v1,v2);


}
