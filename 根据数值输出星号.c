#include<stdio.h>
int main()
{
	int n,i,j=1,k,l;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=2*n-1-j;k++)
		  printf(" ");
		for(l=1;l<=j;l++)
		  printf("*");
        j+=2;
		printf("\n");
	}
	printf("\n");
	return 0;
}
