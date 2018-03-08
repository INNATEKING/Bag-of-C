#include<stdio.h>
void Play(int x,int y)
{
	int i,j;
	for(i=1;i<=x;i++)
	  printf(" ");
    for(j=1;j<=y;j++)
      printf("*");
    printf("\n");
}
int main()
{
	int i,j,k,m;
	int n=9; 
	if(n%2!=0)
    {
	  j=n-1,k=1;
      for(i=1;i<=(n+1)/2;i++)
	  {
  		Play(j,k);
  		j-=2;
  		k+=2;
  	  }
  	  j=n-2,k=2;
  	  for(m=1;m<(n+1)/2;m++)
  	  {
  	  	Play(k,j);
  	  	j-=2;
  	  	k+=2;
  	  }
    }
    printf("\n");
    return 0;
} 
