#include<stdio.h>
int main()
{
	int a[50][50],b[50][50];
	int m,n,i,k,j;
	int *p=&a[0][0],*q=&b[0][0];
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
    {
    	for(j=1;j<=n;j++)
    	{
	    	scanf("%d",&*p);
	    	p++;
	    }
    }
	p=&a[0][0];
	q=&b[0][0];
	for(i=0,j=0;i<m,j<n;i++,j++)
	   *(q+j)=*(p+i*n);
	for(k=0;k<m;k++)
	  for(i=1,j=1;i<n,j<n;i++,j++)
	  {
	      *(q+k+j*m)=*(p+i+k*n);	
	  }
	q=&b[0][0];
	for(i=1;i<=n;i++)
    {
    	for(j=1;j<=m;j++)
    	{
	    	printf("%4d",*q);
	    	q++;
	    }
	    printf("\n");
    }
	return 0;
} 
