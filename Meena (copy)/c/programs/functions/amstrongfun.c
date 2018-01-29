#include<stdio.h>
void check();
void amstrong()
{
	int i ,range;
	printf("enter the range\n");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		check(i);

	}


}
void check(int j)
{
	int op=0,rem=0,num,k;
	int count = 0,val;
	val = j;
	int cnt=1;
	while(val)
	{
		val =val/10;
		count++;
	}
//	printf("%d\n",count);
	num = j;
       
	while(j)
	{
		cnt = 1;
		rem = j % 10;
//		printf("rem is %d\n",rem);
		for(k=1;k<=count;k++)
		{
			cnt =cnt*rem;
//		printf(" rem %d",rem);
		}
	//	op += riem*rem*rem*rem;
		op +=cnt;
		//printf("%d \n",op);
		j = j/ 10;
			
	
	}
	if (num == op)
		printf(" %d\n",op);
	

}
int main()
{
	
	printf("you are going to find amstrong numbers\n");
	amstrong();
	
}


