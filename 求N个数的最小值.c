#include<stdio.h>
int main()
{
	int i,j,n,min;
	printf("Enter the number of integers to be processed:\n");
	scanf("%d",&n);
	printf("Enter an integer:\n");
	scanf("%d",&min);
	for(i=1;i<n;i++)
    {  
	   printf("Enter next integer:\n");
       scanf("%d",&j);
       if(min>j)
         min=j;
       else
         min=min;
    }
    printf("The smallest integer is: %d\n",min);
    printf("\n");
	return 0;
}
