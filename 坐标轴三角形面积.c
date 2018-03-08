#include<stdio.h>
#include<math.h>
int main()
{
	double x1,y1,x2,y2,x3,y3,a,b,s,c,d;
	printf("Enter the coordinates of the three vertices of the triangle:\n");
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	s=(a+b+c)/2;
	d=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of the triangle is: %.2f\n",d);
	printf("\n");
	return 0;
}
