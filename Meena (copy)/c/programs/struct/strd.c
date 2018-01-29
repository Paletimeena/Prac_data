#include<stdio.h>
struct myreg{
	short int r1:4;
	short int r2:2;
	short int r3:3;

};
int main()
{
/**	struct empolyee {
		char name[10];
		int empid;
		char grade[4];
	};
	struct empolyee e1 = {"Meena",847,{50,70,80,90}};
	printf("name:%s,id: %d\n",e1.name,e1.empid);
	
return 0;***/
struct myreg reg;
reg.r1=10;
reg.r2=4;
reg.r3=10;
reg.r1=5;
printf("%d",sizeof(reg));
printf("%d",reg.r1);
printf("%d",reg.r2);
printf("%d",reg.r3);
return 0;



}
