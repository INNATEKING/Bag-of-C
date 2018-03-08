#include<stdio.h>
int main()
{
	int i,j,n,temp;
	int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
      for(j=0;j<n-1;j++)
      {
      	if(a[j]>a[j+1])
      	 {
 	      	 temp=a[j];
 	      	 a[j]=a[j+1];
 	      	 a[j+1]=temp;
         }
      }
    for(j=0;j<n;j++)
      printf("%d ",a[j]);
    printf("\n");
    return 0;
}
