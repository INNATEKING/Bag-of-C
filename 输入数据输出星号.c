#include<stdio.h>
int main()
{
	int a[5]={0},i,j;
	scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	for(i=0;i<5;i++)
	{
		j=0;
		while(j<a[i])
		{
			printf("*");
			j++;
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
