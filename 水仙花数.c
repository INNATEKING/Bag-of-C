#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	int z=i%10,y=(i%100-i%10)/10,x =i/100;
	if(i==x*x*x+y*y*y+z*z*z)
	  printf("YES\n");
    else
      printf("NO\n");
    printf("\n");
    return 0;
}
