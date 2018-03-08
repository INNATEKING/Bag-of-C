#include<stdio.h>
float Max(float x[],int n);
float Min(float y[],int n);
int main()
{
	float a[1000];
	int i,n;
	float max,min,ave,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
       scanf("%f",&a[i]);
       sum+=a[i];
    }
    max=Max(a,n);
    min=Min(a,n);
    ave=sum/n;
    printf("%.2f\n%.2f\n%.2f\n",max,min,ave);
    return 0;
}
float Max(float x[],int n)
{
	float temp;
	int i;
	for(i=0;i<n;i++)
	{
		if(x[i]>x[i+1])
		  temp=x[i];
        else
          temp=x[i+1];
	}
	return temp;
}
float Min(float y[],int n)
{
	float temp;
	int i;
	for(i=0;i<n;i++)
	{
		if(y[i]<y[i+1])
		  temp=y[i];
        else
          temp=y[i+1];
	}
	return temp;
}
