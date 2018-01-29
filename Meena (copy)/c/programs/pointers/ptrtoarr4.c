#include<stdio.h>

int main()
{

	int myarr[4][4]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
	int (*ptrtoarr)[4],index,index1;
//	ptrtoarr = &myarr;
//	printf("add: %p %p %d\n",ptrtoarr,*ptrtoarr,**ptrtoarr);
//	ptrtoarr++;
//	printf("add: %p %p %d\n",ptrtoarr,*ptrtoarr,**ptrtoarr);
//	ptrtoarr++;
//	printf("add: %p %p %d\n",ptrtoarr,*ptrtoarr,**ptrtoarr);
	ptrtoarr = &myarr;
	
	for(index =0;index<4;index++)
		printf("oly row base address: %p %p %d\n",ptrtoarr,*(ptrtoarr+index),**ptrtoarr++);
	ptrtoarr = &myarr;	
	for(index = 0;index<4;index++)
	for(index1 = 0;index1<4;index1++)
		printf("each element: %p %p %d\n",ptrtoarr+index,*(ptrtoarr+index)+index1,*(*(ptrtoarr+index)+index1));
		




return 0;
}

