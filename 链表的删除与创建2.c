#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}Node;
Node *Initnode()
{
	int x;
	Node *head,*tail,*p;
	head=tail=NULL;
	printf("Please enter the value:");
	scanf("%d",&x);
	while(x!=0)
	{
		p=(Node *)malloc(sizeof(Node));
		if(p==NULL)
		{
			printf("Error to gain the space!");
			exit(0);
		}
		p->data=x;
		p->next=NULL;
		if(head==NULL)
		  tail=head=p;
        else
        {
        	head->next=p;
        	head=p;
        }
        printf("Please enter the next value:");
        scanf("%d",&x);
	}
	return tail;
}
void Travelnode(Node *tail)
{
	if(tail==NULL)
	  printf("Empty!\n");
	while(tail!=NULL)
    {
    	printf("%d ",tail->data);
    	tail=tail->next;
    }
}
void Delelement(Node *tail,int element)
{
	Node *pro=NULL,*temp=tail;
	while(tail->data!=element)
	{
		pro=tail;
		tail=tail->next;
	}
	if(tail==NULL)
	  printf("Fail to find the element!");
    else
    {
    	pro->next=tail->next;
    	free(tail);
    }
    Travelnode(temp);
}
int main()
{
	Node *tail;
	tail=Initnode();
	printf("链表中的元素为：\n"); 
	Travelnode(tail);
	printf("\n");
	int element;
	printf("请输入要删除的元素：\n");
	scanf("%d",&element);
	Delelement(tail,element);
	printf("\n");
	return 0;
}
