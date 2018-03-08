#include<stdio.h>
int main()
{
	int i;
	float ave,j,sum=0;
	for(i=1;;i++)
    {  
	   printf("Enter an integer ( 9999 to end ):\n");
       scanf("%f",&j);
       if(j!=9999)
         sum+=j;
       else
         break;
    }
    if(i==1)
	  printf("No values were entered.\n");
    else
    {
   	  ave=sum/(i-1);
      printf("The average is: %.2f\n",ave);
	  printf("\n");
    }
	return 0;
}
