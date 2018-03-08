#include<stdio.h>
#include<string.h>
void comstring(int n)
{
	int i=1;
	char str1[80];
	gets(str1);
	char str2[80];
	char str[80];
	strcpy(str,str1);
	while(i<n)
	{
		gets(str2);
		if(strcmp(str,str2)==1)
		  strcpy(str,str1);
        else
          strcpy(str,str2);
		i++;
	}
	puts(str);
}
int main()
{
	int n;
	scanf("%d",&n);
	comstring(n);
	return 0;
}
