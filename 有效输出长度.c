#include<stdio.h>
int main()
{
	int a;
	printf("Enter a five-digit number:\n");
	scanf("%5d",&a);
	int b,c,d,e,f;
	b=a/10000;
	c=(a%10000)/1000;
	d=((a%10000)%1000)/100;
	e=(((a%10000)%1000)%100)/10;
	f=(((a%10000)%1000)%100)%10;
	printf("%d   %d   %d   %d   %d",b,c,d,e,f);
	return 0;
}
