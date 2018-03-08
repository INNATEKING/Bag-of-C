#include<stdio.h>
int factorial (int n)
{
	int result=1;
	if(n==0)
	  result=1;
    else
      result=factorial(n-1)*n;
    return result;
}
int main()
{
	int i,n,result=0,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result=factorial(i);
		sum+=result;
	}
	printf("%d\n\n",sum);
	return 0;
}
