#include<stdio.h>
int main()
{
	int i;
	double x,add,sum,y=1;
	scanf("%lf",&x);
	add=x/y;
	sum=add;
	for(i=1;;i++)
	{
		if(add<1E-8)
		  break;
        else
        {
        	x*=x*x;
        	y*=(i*2)*(i*2+1);
        	add=x/y;
        }
        if(i%2!=0)
          add=-add;
        else
          add=add;
        sum+=add;
	}
	printf("%.2f\n",sum);
	return 0;
}
