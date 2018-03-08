#include<stdio.h>
#include<stdlib.h>
int creat(int n)
{
	int data,i=0,sum=0,*p=NULL;
	p=(int *)malloc(sizeof(int));
    if(p==NULL)
    {
 	  printf("Error to gain the space!");
 	  exit(0);
    }
    while(i<n)
    {
		scanf("%d",&data);
		*p=data;
		sum+=*p;
		i++;
    }
    return sum;
}
double calculateAverage(int sum,int n)
{
	double ave;
	ave=(double)sum/n;
	return ave;
}
int main()
{
	int n,sum;
	double ave;
	scanf("%d",&n);
	sum=creat(n);
	ave=calculateAverage(sum,n);
	printf("%.2f\n\n",ave);
	return 0;
} 
