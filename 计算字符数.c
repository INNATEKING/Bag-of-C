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
	printf("����Ϊ: %d��\n",num);
	printf("Сд��ĸΪ: %d��\n",min);
	printf("��д��ĸΪ: %d��\n",max);
	printf("�ո�Ϊ: %d��\n",empty);
	printf("�����ַ�Ϊ: %d��\n",others);
	printf("\n");
	return 0;
}
