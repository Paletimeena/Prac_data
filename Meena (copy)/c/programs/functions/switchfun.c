#include<stdio.h>
int arithematic(char ch,int val1,int val2)
{
	int result=0;
	
	switch(ch)
	{
		case '+':
			printf("you are doing summation\n");
			result = val1 + val2;
			break;
		case '-':
			printf("you are doing subraction\n");
			result = val1 - val2;
			break;
		case '*':
			printf("you are doing summation\n");
			result = val1 * val2;
			break;
		case '/':
			printf("you are doing summation\n");
			result = val1 / val2;
			break;			
		default:
			printf("sorry");
//	return result;
	}

return result;
}

void main()
{
	int val1,val2,result;
	char ch;
	printf("enter 2 values and operation to be done");
	scanf("%d %d %c",&val1,&val2,&ch);
	result = arithematic(ch,val1,val2);
	printf("result : %d\n",result);

}
