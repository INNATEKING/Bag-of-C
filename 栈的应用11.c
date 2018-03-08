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
	printf("Please enter 8 values(either 1 or 0 and others wrong)!\n");
	while(i<8)
	{
		printf("Please enter the value: \n");
		scanf("%d",&(*top).value);
		top++;
		i++;
	}
	return top;
}
void show(Stack *top)
{
	int i=0;
	while(i<9)
	{
		printf("%d ",(*top).value);
		top--;
		i++;
	}
	printf("\n");
}
void JZswitch(Stack *top)
{
    int i=0,a,b=1,sum=0;
    while(i<8)
    {
    	top--;
		a=top->value*b;
    	i++;
    	b*=2;
    	sum+=a;
    }
    printf("%d",sum);
}
int main()
{
	Stack *top2=NULL;
	top2=Initstack();
	show(top2);
	printf("对应的十进制数为: ");
	JZswitch(top2);
	printf("\n");
	return 0;
}
