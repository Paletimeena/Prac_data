#include<stdio.h>
#include<stdlib.h>

int getmissingnumber(int arr[],int num)
{

int total = ((num+1)*(num+2))/2;
for(int i = 0; i <num; i++)
{
	total = total - arr[i];
}

return total;
}

int getx1(int arr[],int num)
{
	int x1=1;

	for(int i=0;i<num;i++)
	{
		x1 ^= arr[i];
		
	}
return x1;

}

int getx2(int n)
{

	int x2=1;
	for(int i=1;i<=n+1;i++){
		x2 ^= i;
	}
return x2;

}

int main()
{
int x1,x2,x3;
int arr[]={1,2,3,4,6,7,8,9,10,11};
int arrlen,num;
arrlen=sizeof(arr)/sizeof(arr[0]);
printf("length of the given array is : %d \n",arrlen);

num=getmissingnumber(arr,10);
printf("Missing number in the given array is : %d \n",num);


x1=getx1(arr,10);
x2=getx2(10);
x3=x1 ^ x2;
printf("missing number : %d \n",x3);
return 0;
}
