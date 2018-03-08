#include<stdio.h>
#include<stdlib.h>
int calculateMaxValue(int m,int n)
{
	int max=0,i=0,temp=0;
	int *p=NULL;
	p=(int *)malloc(sizeof(int));
    if(p==NULL)
    {
		printf("Error to gain the space!");
		exit(0);
	}
	while(i<m*n)
	{
		scanf("%d",&*p);
		max=(*p)>temp?(*p):temp;
		temp=max;
		i++;
	}
	return max;
}
int main()
{
	int m,n,max=0;
	scanf("%d%d",&m,&n); 
	max=calculateMaxValue(m,n);
	printf("%d\n\n",max);
	return 0;
} 
