#include<stdio.h>

int main()
{
	char ch;
	int a;
	float b;
	 long double c;

printf(" char %ld \n int %ld\n float %ld\n double  %ld\n",sizeof(ch),sizeof(a),sizeof(b),sizeof(c));

	ch='a',a=10,b=10.00,c=12.3541;

printf(" char %c %ld\n int %d %ld\n float %f %ld\n double  %lf %ld\n",ch,sizeof(ch),a,sizeof(a),b,sizeof(b),c,sizeof(c));
return 0;

}
