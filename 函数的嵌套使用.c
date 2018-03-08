#include<stdio.h>
long Factorial(int n)
{
	int i;
	long result=1;
	for(i=1;i<=n;i++)
	   result*=i;
    return result;
}
long FactorialSum(int n)
{
	int i;
	long sum=0;
	for(i=1;i<=n;i++)
	   sum+=Factorial(i);
    return sum;
}
int main()
{
	int n;
	long sum;
	printf("ÇëÊäÈënµÄÖµ£º\n");
	scanf("%d",&n);
	sum=FactorialSum(n);
	printf("%ld\n",sum);
	return 0;
} 
