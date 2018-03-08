#include<stdio.h> 	
int main()
{
   int i,j=0,sum;
   int a[30];
   float b[6];
   a[0]=2;
   for(i=0;i<29;i++)
     a[i+1]=a[i]+2;
   for(i=0;i<=5;i++)
   {
      sum=0;
      for(;j<5*(i+1);j++)
         sum+=a[j];
      b[i]=sum/5;
      j=(i+1)*5;
    }
   for(i=0;i<30;i++)
      printf("%d ",a[i]);
   printf("\n");
   for(j=0;j<=5;j++)
      printf("%.2f ",b[j]);
   printf("\n");
   return 0;
}
