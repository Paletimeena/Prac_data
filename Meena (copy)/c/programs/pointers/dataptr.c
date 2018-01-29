#include<stdio.h>
int main()
{
	int v1,*intptr;
	float v2,*floatptr;
	char ch,*charptr;
	void *vdptr;
	v1=10;
        v2 = 52.4988;
        ch = 'A';
	intptr = &v1;
	floatptr = &v2;
	charptr = &ch;
	printf("intptr %p %d\n",intptr,*intptr);
	printf("float:%p %f\n",floatptr,*floatptr);
	printf("charpyr: %p %c\n",charptr,*charptr);

	vdptr = intptr;
	printf("intptr: %p %d\n",vdptr,*(int *)vdptr);
	vdptr = floatptr;
	printf("floatptr: %p %f\n",vdptr,*(float *)vdptr);
	vdptr = charptr;
	printf("charptr: %p %c\n",vdptr,*(char *)vdptr);

return 0;

}
