#include<stdio.h>
int add(int v1,int v2)
{
	int res;
	res = v1+v2;

return res;
}
int sub(int v1,int v2)
{
	int res;
	res = v1-v2;

return res;
}
int mul(int v1,int v2)
{
	int res;
	res = v1*v2;

return res;
}
int div(int v1,int v2)
{
	int res;
	res = v1/v2;

return res;
}
int main()
{
	int (*arthptr)(int ,int);
	int v1,v2,res;
	char op;
	printf("enter two variables and operation to be done\n");
	scanf("%d %d %c",&v1,&v2,&op);
	
	switch(op){

		case '+':
			printf("you selected addition\n");
			arthptr = add;
			res = (*arthptr)(v1,v2);
			printf("v1+v2: %d\n",res);
			break;
		case '-':
			printf("you selected subration\n");
			arthptr = sub;
			res=(*arthptr)(v1,v2);
			printf("v1-v2: %d\n",res);
			break;
		case '*':
			printf("you selected multiplication\n");
			arthptr = mul;
			res=(*arthptr)(v1,v2);
			printf("v1*v2: %d\n",res);
			break;
		case '/':
			printf("you selected division\n");
			arthptr = div;
			res=(*arthptr)(v1,v2);
			printf("v1/v2: %d\n",res);
			break;


		}


return 0;
}
