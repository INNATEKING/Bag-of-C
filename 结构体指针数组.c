#include<stdio.h>
struct student
{
	int num;
	char name[10];
	char sex;
	int age;
	float chinese;
	float math;
	float english;
};
int main()
{
	int i,j;
	struct student temp;
	struct student stuArr[4]={{1,"杨阳",'M',20,88,98,68},{2,"詹斯",'M',33,89,66,94},{3,"韦德",'M',35,68,54,78},{4,"科比",'M',40,98,65,68}};
	struct student *p;
	p=stuArr;
  	  p=stuArr;
  	  for(i=1;i<=4;i++)
  	  {
  	  	printf("%2d%4s%2c%3d%6.2f%6.2f%6.2f\n",p->num,p->name,p->sex,p->age,p->chinese,p->math,p->english);
  	  	p++;
  	  }
	return 0;
}
