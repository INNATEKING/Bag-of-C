#include <stdio.h>
int main()
{
	int j,m=0;
	float a[50];
	float k,sum=0;
    for(j=0;j<50;j++)
    {
    	printf("Enter grade, -1 to end:\n");
        scanf("%f",&a[j]); 
        if(a[j]<0)
          break;
        sum+=a[j];
        m++; 
    }
    k=sum/m;
    printf("Class average is %.2f",k);
    printf("\n");
	return 0;
}
