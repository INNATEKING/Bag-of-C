#include<stdio.h>
int main()
{
   char a;
   float  b,c,d;
   scanf("%c",&a);
   scanf("%f%f",&b,&c);
   if(a=='+')
     {
	   d=b+c;
	   printf("%f\n",d);
     }
   else if(a=='-')
     {
	   d=b-c;
	   printf("%f\n",d);
     }
   else if(a=='*')
     {
	   d=b*c;
	   printf("%f\n",d);
     }
   else if(a=='/')
     {
	   d=(float)b/c;
	   printf("%f\n",d);
     }
   else
     printf("Input error!\n");
   return 0;
}
