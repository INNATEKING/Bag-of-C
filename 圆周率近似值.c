#include<stdio.h>
#include<math.h>
int main()
{
	int n=1,count=0;
	double i=1.0,pi,sum=0;
    while(fabs(1.0*i/n)>=1E-7)
	{   
		sum=sum+1.0*i/n;
		i=-i;
		n+=2;
		count++;
	}
	pi=4*sum;
	printf("pi= %.6f\n count=%d\n",pi,count);
	return 0;
}
