#include<stdio.h>

int main()
{
	int a[2]={1,2};
	for(int i =0;i<2;i++){
		printf("%d\n",a[i]);
	}
	
	printf("%ld\n",sizeof(a));

	int num[10];
	int st=0,i=0;
	printf("enter the numbers\n");
	scanf("%d",&st);
	while(st !=0)
	{
		printf("i value is : %d\n",i);
		num[i]=st;
		i++;
	
		scanf("%d",&st);
	}
	int len=0;
	for(int i=0;num[i] !='\0';i++)
	{
		printf("numbers %d\n",num[i]);
		len++;
	}
	printf("%d\n",len);

	for(int j=(len-1);j>=0;j--)
	{

		printf("hiiii\n");		
		printf("reverse numbers %d\n",num[j]);

	}

return 0;

}
