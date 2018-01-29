#include<stdio.h>
int main()
{
	int v1,v2,res;
	char ch;
	printf("which operation u need to perform + _ * /\n");
	scanf("%c",&ch);
	printf("enter the two values\n");
	scanf("%d %d",&v1,&v2);
	switch(ch)
	{
	case '+':{
		 res=v1+v2;
		 printf(" sum of %d, %d, is %d\n",v1,v2,res);	
	       	 break;
		 }
	case '-':{
		 res=v1-v2;
		 printf(" suberaction of %d, %d, is %d\n",v1,v2,res);	
		 break; 
		 }
	case '/':{
		 res=v1/v2;
		 printf(" division of %d, %d ,is %d\n",v1,v2,res);	
		 break;
		 }
	case '*':{
		 res=v1*v2;
		 printf(" multiplication of %d, %d, is %d\n",v1,v2,res);	
		 break;
		 }
	default:
		
		 printf(" sorry");	
		 break;
		

	}


}
