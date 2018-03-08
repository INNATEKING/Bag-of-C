#include <stdio.h>
int main()
{
	char str1[16]="number";
	char str2[8]="square";
	char str3[8]="cube";
	int array[11][3]={{0},{1},{2},{3},{4},{5},{6},{7},{8},{9},{10}};
	int i,j,m;
	int k=0;
	for(i=0;i<=10;i++)
	{
	   for(j=0;j<=1;j++)
	   {
   		  array[k][1]=array[k][0]*array[k][0];
   		  array[k][2]=array[k][0]*array[k][0]*array[k][0];
   	   }
       k++;	
	}
	printf("%s  ",str1);
	printf("%s  ",str2);
	printf("%s    ",str3);
	printf("\n");
	int x=0;
	for(m=0;m<=10;m++)
	{
		printf("%d",array[x][0]);
        printf("%8d",array[x][1]);
        printf("%8d",array[x][2]);
        x++;
        printf("\n");
	}
	printf("\n");
	return 0;
}
