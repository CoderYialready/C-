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
	struct stu s = { "����", 20 ,80.5};//�ṹ��Ĵ������ʼ��
	printf("1:%s %d %f\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	struct stu* ps = &s;
	printf("2:%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
	printf("1:%s %d %f\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա����
	return 0;
}
