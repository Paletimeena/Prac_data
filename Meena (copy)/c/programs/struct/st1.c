#include<stdio.h>
int main()
{
	struct empolyee {
		char name[10];
		int empid;
		char grade[4];
	};
	struct empolyee e1 = {"Meena",847,{50,70,80,90}};
	printf("name:%s,id: %d\n",e1.name,e1.empid);
	
return 0;
}
