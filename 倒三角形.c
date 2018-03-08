#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Please enter line: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
   		for(j=1;j<=i-1;j++)
   		   printf(" ");
	    for(j=1;j<=2*n+1-2*i;j++)
	       printf("*");
        printf("\n");
   	}
   	return 0;
}
