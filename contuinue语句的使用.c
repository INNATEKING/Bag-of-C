#include<stdio.h>
int main()
{
	int i=1;
	for(;i<=10;i++)
	{
		if(i!=5)
		  printf("%d\n",i);
        else
          continue;
	}
	printf("Used continue to skip printing the value 5\n");
	printf("\n");
	return 0;
} 
