#include<stdio.h>
int main()
{
	int arr[10]={0};
	int n,i=1;
	scanf("%d",&n);
	int m;
	while(i<=n)
	{
		scanf("%d",&m);
		arr[m-1]+=1;
		i++;
	}
	i=0;
	printf("Rating        Frequency\n");
	while(i<10)
	{
		printf("%6d%17d\n",i+1,arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}
