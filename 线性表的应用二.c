#include<stdio.h>
#include<stdlib.h>
struct node
{
	int xishu;
	int zhishu;
	struct node *next;
};
typedef struct node Node;
Node *creat()
{
	Node *head,*tail,*p;
	head=tail=NULL;
	int x,y;
	printf("请输入非零项的系数和指数：\n");
	scanf("%d%d",&x,&y); 
	while(x!=0&&y!=0)
	{
		p=(Node *)malloc(sizeof(Node));
		if(p==NULL)
		{
			printf("开辟内存失败！\n");
			exit(0);
		}
		p->xishu=x;
		p->zhishu=y;
		p->next=NULL;
		if(head==NULL)
		  head=tail=p;
		else
		{
			tail->next=p;
			tail=p;
		}
		printf("请输入下一非零项的系数和指数：\n");
		scanf("%d%d",&x,&y);
	}
	return head;
}
Node *Combine(Node *A,Node *B)
{
	if(A!=NULL&&B!=NULL)
	{
		while(A!=NULL)
		  A=A->next;
        A->next=B;
        return A;
	}
	else if(A!=NULL&&B==NULL)
      return A;
    else if(A==NULL&&B!=NULL)
    	return B;
    else 
      return NULL;
}
int main()
{
	Node *A,*B,*C,*p;
	printf("第一个一元多项式的创立：\n");
	A=creat();
	printf("第二个一元多项式的创立：\n"); 
	B=creat();
	p=Combine(A,B);
    Node *temp=p,*head=NULL,*tail=NULL;
	int sumxi;
	if(p!=NULL)
	  {
	     sumxi=temp->xishu;
	     temp=p;
	  }
	while(temp!=NULL)
	{
	   p=temp->next;
	   sumxi=temp->xishu;
	   for(;p->next!=NULL;p=p->next)
	   {
		  if(p->zhishu==temp->zhishu)
		    sumxi+=p->xishu; 
	      C=(Node *)malloc(sizeof(Node));
	      if(C==NULL)
		  {
			 printf("开辟内存失败！\n");
			 exit(0);
		  }
		  C->zhishu=p->zhishu;
		  C->xishu=sumxi;
		  C->next=NULL;
		  if(head==NULL)
		    head=tail=C;
		  else
		  {
			tail->next=C;
			tail=C;
		  }
	    }
	    temp=temp->next;
	}
	printf("和一元多项式为：\n");
	printf("\n");
	return 0;
}
