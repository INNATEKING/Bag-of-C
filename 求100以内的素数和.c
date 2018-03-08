#include<stdio.h>
int main()
{
	int sum=0,i=1;
	while(i<=100)
	{
		if(i%2!=0)
		  i++;
        else
        {
        	sum+=i;
        	i++;
        }
	}
	printf("Sum is %d\n",sum);
	printf("\n");
	return 0;
}
