#include<stdio.h>
#include<stdlib.h>
void dream(int n)
{
	int i=1;
	float ave,sum=0,max,min;
	float *p=NULL;
	p=(float *)malloc(sizeof(float));
	if(p==NULL)
	{
		printf("Error to gain the space!");
		exit(0);
	}
	scanf("%f",&*p);
	max=min=*p;
	sum=*p;
	while(i<n)
	{
		scanf("%f",&*p);
		sum+=*p;
		max=max>*p?max:*p;
		min=min<*p?min:*p;
		i++;
	}
	ave=sum/n;
	printf("%.2f\n%.2f\n%.2f\n\n",max,min,ave);
}
int main()
{
	int n;
	scanf("%d",&n);
	dream(n);
	return 0;
}
