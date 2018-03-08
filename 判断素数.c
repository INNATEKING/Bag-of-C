#include<stdio.h>
int main()
{
	int i=2,n;
	scanf("%d",&n);
	while(n%i!=0)
	  i++;
	if(i==n)
	  printf("Yes!\n\n");
	else  
	  printf("No!\n\n");
	return 0;
}
