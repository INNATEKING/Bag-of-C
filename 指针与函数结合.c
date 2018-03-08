#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	printf("Please enter a,b:\n");
	scanf("%d%d",&a,&b);
	printf("Before swap:a=%d,b=%d\n",a,b);
	int *pt1=&a,*pt2=&b;
	swap(pt1,pt2);
	printf("After swap:a=%d,b=%d\n",a,b);
	return 0;
}
