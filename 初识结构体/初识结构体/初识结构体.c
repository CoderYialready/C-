#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct stu
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct stu s = { "张三", 20 ,80.5};//结构体的创建与初始化
	printf("1:%s %d %f\n", s.name, s.age, s.score);//结构体变量.成员变量
	struct stu* ps = &s;
	printf("2:%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
	printf("1:%s %d %f\n", ps->name, ps->age, ps->score);//结构体指针->成员变量
	return 0;
}
