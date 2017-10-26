#include<stdio.h>

#define funworld 100

int main()
{


	#ifdef funworld 
	printf("funworld is defined \n");
	#endif

	#ifndef funworld
	printf("funworld is not defi\n");
	#endif

return 0;
}