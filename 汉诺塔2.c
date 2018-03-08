#include<stdio.h>
void move(int n,char x,char y,char z)
{
	if(n==1)
	  printf("Move %d : from %c to %c\n",n,x,z);
    else
    {
    	move(n-1,x,z,y);
    	printf("Move %d : from %c to %c\n",n,x,z);
    	move(n-1,x,z,y);
    }
}
int main()
{
	int n;
    scanf("%d",&n);
	move(n,'A','C','B');
	return 0;
}
