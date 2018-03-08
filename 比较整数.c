#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	  printf("%d is larger\n",a);
    else if(a<b)
      printf("%d is larger\n",b);
    else
      printf("These numbers are equal\n");
    printf("\n");
    return 0;
}
