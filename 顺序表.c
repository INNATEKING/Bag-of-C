#include<stdio.h>
struct SqList
{
	int date;
};
typedef struct SqList List;
int Length(List *x)
{
	int length=0;
	while(x->date!=0)
	{
		length+=1;
		x++;
	}
	return length;
}
List *location(List *x,int y)
{
	List *q;
	while(x->date<=y&&x->date!=0)
	  x++;
	if(x->date<=1E-5)
	{
		q=x;
		return q;
	}
	++x;
	while(x->date<y)
	  x++;
    if(x->date<=1E-5)
	{
		q=x;
		return q;
	} 
	else
	{
		q=x-1;
		return q;
	}
}
void insert(List *x,int y)
{
	List *p=x;
	List *q;
	while(x->date!=0)
    {
    	q=x;
    	x++;
    }
    while(q!=p-1)
    {
    	x->date=q->date;
    	q--;
    	x--;
    }
    p->date=y;
    
}
int main()
{
	int i,value,length=0;
	List Arr[9]={{1},{3},{5},{7},{10},{12},{14},{15},{0}};
	List *p=Arr;
	length=Length(p);
	printf("未插入之前的表长为: %d\n表中各元素为:\n",length);
	for(i=1;i<=length;i++)
	{
		printf("%3d",p->date);
		++p;
	}
	printf("\n");
	printf("请输入要插入的元素：\n");
	scanf("%d",&value);
	p=Arr;
	List *q;
	q=location(p,value);
	insert(q,value);
	printf("插入之后的表长为：%d\n表中各元素为：\n",length+1);
	for(i=1;i<=length+1;i++)
	{
		printf("%3d",p->date);
		++p;
	}
	printf("\n");
	return 0;
}
