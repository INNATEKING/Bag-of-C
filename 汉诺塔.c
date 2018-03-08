#include<stdio.h>
int step=0;
void move(char s, char t, int d)
{
	int i,j;
	step++;
	printf("Move %d : from %c to %c\n",step,s,t);
}
void hanoi(char a, char b, char c, int n)
{
	if(n==1)
	{
		move(a,b,n);
	}
	else
	{
		hanoi(a,c,b,n-1);
		move(a,b,n);
		hanoi(c,b,a,n-1);
	}
}
int main()
{
	int i,n;
	printf("«Î ‰»În÷µ\n");
	scanf("%d",&n);
	hanoi('A','C','B',n);
	return 0;
}
