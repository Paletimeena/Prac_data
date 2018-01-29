#include<stdio.h>

int main()
{
enum colur{red=10,orange,black=0,yellow};
printf("%d %d %d %d\n",red,orange,black,yellow);
orange = 20;
return 0;
}
