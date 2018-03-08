#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
	int value;
}Stack;
Stack *Initstack()
{
	int i=0;
	Stack *top=NULL;
	top=(Stack *)calloc(8,sizeof(Stack));
	if(top==NULL)
	{
		printf("Error to gain the space");
		exit(0);
	}
	while(i<8)
	{
		printf("Please enter the value: \n");
		scanf("%d",&*top);
		top++; 
		i++;
	}
	return top;
}
void show(Stack *top)
{
	int i=0;
	while(i<8)
	{
		top--;
		printf("%d ",*top);
		i++;
	}
	printf("\n");
}
Stack *JZstack()
{
	Stack *top;
	printf("Please enter 8 values(either 1 or 0 and others wrong)!\n");
	top=Initstack();
	return top;
}
int JZswitch(Stack *top)
{
    int i=0,a,b=1,sum=0;
    while(i<8)
    {
    	top--;
		a=(*top).value*b;
    	i++;
    	b*=2;
    	sum+=a;
    }
    return sum;
}
int main()
{
	Stack *base,*top1;
	base=top1=NULL;
	top1=Initstack();
	printf("出栈顺序依次为: \n");
	show(top1); 
	Stack *top2;
	top2=JZstack();
	show(top2);
	int a;
	a=JZswitch(top2);
	printf("对应的十进制数为: %d\n",a);
	printf("\n");
	return 0;
}
