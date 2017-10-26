#include<stdio.h>

int fact();
int main(){
int result;
printf("hello world\n");
result=fact(5);
printf("reult is %d\n",result);
return 0;
}

int fact(int n)
{
int total =1;
while(n >=1){
	
	total = total*n;
	n -=1;
}
return total;
}
