#include<stdio.h>
void myfun()
{
	printf("my function\n");
}
int main()
{

	void (*myfunptr)();
	myfunptr = myfun;
	myfunptr();
	(*myfunptr)();

return 0;

}
