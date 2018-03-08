#include<stdio.h>
int main()
{
	int i,num=0,min=0,max=0,empty=0,others=0;
	char str[10];
	gets(str);
	for(i=0;i<10;i++)
	{
		if(str[i]>=48&&str[i]<=57)
		  num+=1;
        else if(str[i]>=65&&str[i]<=90)
		  max+=1;
		else if(str[i]>=97&&str[i]<=122)
		  min+=1;
		else if(str[i]==' ')
		  empty+=1;
		else
		  others+=1;   
	}
	printf("数字为: %d个\n",num);
	printf("小写字母为: %d个\n",min);
	printf("大写字母为: %d个\n",max);
	printf("空格为: %d个\n",empty);
	printf("其他字符为: %d个\n",others);
	printf("\n");
	return 0;
}
