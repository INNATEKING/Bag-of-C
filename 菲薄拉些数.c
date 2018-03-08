#include<stdio.h>
int main()
{
	int n,j=1,i;
	scanf("%d",&n);
	int a[40]={0};
	for(i=0;i<n;i++)
	{
		if(j<=2)
		  a[i]=1;
        else
          a[i]=a[i-1]+a[i-2];
        j++;
	}
    for(i=1;i<=n;i++)
    {
    	if(i%5!=0)
    	  printf("%d ",a[i-1]);
 	    else
 	    {
    	 	printf("%d ",a[i-1]);
    	 	 printf("\n");
   	     }
    }
	return 0;
}
