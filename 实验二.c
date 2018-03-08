#include<stdio.h>
int Max(int a,int b,int c,int d)
{
	int thmp;
	if(a>b)
	  thmp=a;
    else
      thmp=b;
    if(thmp>c)
      thmp=thmp;
    else
      thmp=c;
    if(thmp>d)
      thmp=thmp;
    else
      thmp=d;
    return thmp;
}
int main()
{
	int b[3]; 
    int a[3][4]={{3,16,87,65},{4,32,11,108},{10,25,12,57}};
	b[0]=Max(a[0][1],a[0][2],a[0][3],a[0][4]);
	b[1]=Max(a[1][1],a[1][2],a[1][3],a[1][4]);
	b[2]=Max(a[2][1],a[2][2],a[2][3],a[2][4]);
	printf("%d %d %d\n",b[0],b[1],b[2]);
	return 0;
}
