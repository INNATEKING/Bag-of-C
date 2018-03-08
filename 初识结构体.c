#include<stdio.h>
struct date
{
	int year;
	int month;
	int day;
};
struct student
{
	int num;
	char name[10];
	char sex;
	struct date birthday;
	int age;
	float chinese;
	float math;
	float english;
};
int main()
{
	int a;
	struct student stu={1,"ÕÅÈı",'M',{1996,8,8},22,88,90,87};
	struct student love;
	love=stu;
	printf("%d\n%s\n%c\n%d.%d.%d\n%d\n%.2f\n%.2f\n%.2f\n",stu.num,stu.name,stu.sex,stu.birthday.year,stu.birthday.month,stu.birthday.day,stu.age,stu.chinese,stu.math,stu.english);
	printf("%d\n",love.num);
	a=stu.num+love.num;
	printf("%d\n",a);
	printf("\n");
	return 0;
}
