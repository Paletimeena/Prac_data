#include<stdio.h>

int main()
{
	int x=20;

      int arr1[10]={1,2,3,4,5,6,7,8,9,10};
      int arr2[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;arr1[i] !='\0';i++){
		for(int j=0;arr2[j] !='\0';j++)
		{
			if(arr1[i]+arr2[j]==x)
				{
				printf("%d %d\n",arr1[i],arr2[j]);
				}
			else
				{
				printf("elements not found\n");
				}

		}	
	
	}
	

return 0;
}
