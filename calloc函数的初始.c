#include<stdio.h>
#include<stdlib.h> 
typedef struct 
{
	int value;
}Stack;
Stack *Initstack()
{
	int i=0;
	Stack *top;
	top=(Stack *)calloc(8,sizeof(Stack));
	if(top==NULL)
	{
		printf("�����ڴ�ʧ�ܣ�\n");
		exit(0);
	}
	while(i<8)
	{
		top+=i;
		printf("Please enter the value:\n");
		scanf("%d",&*top);
		i++;
	}
	return top;
}
int main()
{
	Stack *top,*base;
	base=NULL,top=NULL;
	top=Initstack();
	printf("ջ��Ԫ��Ϊ��\n");
	printf("%d\n",*top);
	return 0; 
}
