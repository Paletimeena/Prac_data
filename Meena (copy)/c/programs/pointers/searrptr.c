#include<stdio.h>
int main ()
{
	int myarr[5]={10,20,30,40,50};
	int v1,v2,v3,v4,v5,index;
	v1 = myarr[0];
	v2 = myarr[1];
	v3 = myarr[2];
	v4 = myarr[3];
	v5 = myarr[4];
	int *myarrptr[6]={&v1,&v2,&v3,&v4,&v5};
	printf("helllo\n");
//	myarrptr[0] = &v1;
//	myarrptr[1] = &v2;
//	myarrptr[2] = &v3;
//	myarrptr[3] = &v4;
//	myarrptr[4] = &v5;
//	myarrptr[6]= {&v1,&v2,&v3,&v4,&v5};	
	for(index=0;index<5;index++)
		printf("myarr:%p %d\n",myarrptr[index],*myarrptr[index]);
			
	myarrptr[5] = myarr;
	for(index=0;index<6;index++)
		printf("myarr2:%p %d\n",myarrptr[index],*myarrptr[index]);
	printf("size of myarrptr: %d\n",sizeof(myarrptr));



return 0;
}
