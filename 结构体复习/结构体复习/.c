#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct B
{
	char a;
	double b;
	float c;

};
struct stu
{
	struct B sb;
	char name[20];
	int age;
	char id[20];
};
void print(struct stu* t)
{
	printf("%s\n", t->name);
	printf("%s\n", (*t).name);

}
int main()
{
	struct stu s = { {'w',3,3.14},"ÕÅÈý",20,"20221004" };
	printf("%c %lf %lf %s %d %s", s.sb.a, s.sb.b, s.sb.c, s.name, s.age, s.id);
	struct stu* ps = &s;
	printf("%s\n", ps->name);
	printf("%s\n", (*ps).name);
	print(&s);
	return 0;
}