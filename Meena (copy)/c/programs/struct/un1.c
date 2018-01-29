#include<stdio.h>
union marksgrade
{
	int marks;
	char grade[0];
};
struct empolyee
{
	char name[10];
	int id;
	union marksgrade mg;

};
int main()
{
	
	struct empolyee e1;
	e1.mg.marks=50;
	printf("%d\n",e1.mg.marks);




return 0;
}
