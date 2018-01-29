#include<stdio.h>
struct empolyee
{
	char name[10];
	int id;
//	char ch[5];
	int grade[4];
//	struct dob dob1;

	struct dob{
		int date;
		int month;
		int year;
	}dob1;
	
}e1;
int main()
{
	struct empolyee e2 = {"meena",847,{10,20,30,40},11,10,1993};
	
	e1=e2;
//	if(e1 < e2)
//	{
	printf("name: %s\n",e1.name);		
	printf("id: %d\n",e1.id);		
	printf("marks[0]: %d\n",e1.grade[0]);		
	printf("marks[1]: %d\n",e1.grade[1]);		
	printf("marks[2]: %d\n",e1.grade[2]);		
	printf("marks[3]: %d\n",e1.grade[3]);
	printf("date : %d\n",e1.dob1.date);
	printf("date : %d\n",e1.dob1.month);
	printf("date : %d\n",e1.dob1.year);
	printf("sizeof e1: %ld\n",sizeof(e1));
//	}
return 0;
}
