#include<stdio.h>
int main()
{
	int a[5];
	int i;
	int max,min,mid;
	printf("Input 5 integers:\n");
	for(i=0;i<=4;i++)
	  scanf("%d",&a[i]);
	max=a[0];
	min=a[0];
	for(i=0;i<4;i++)
	 {
		if(max>a[i+1]||max==a[i+1])
	      mid=max;
        else
          mid=a[i+1];
        max=mid;
	 }
	for(i=0;i<4;i++)
     {
		if(min<a[i+1]||min==a[i+1])
		  mid=min;
        else
          mid=a[i+1];
        min=mid;
     }
     printf("The largest value is %d\n",max);
     printf("The smallest value is %d\n",min);
     printf("\n");
     return 0;
}
