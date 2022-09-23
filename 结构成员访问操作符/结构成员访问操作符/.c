#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct Book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	struct Book b = { "C语言","C22921",55 };
	struct Book* pb = &b;

	printf("书名:%s\n", pb->name);
	printf("序号:%s\n", pb->id);
	printf("价格:%d\n", pb->price);

	printf("书名:%s\n", (*pb).name);
	printf("序号:%s\n", (*pb).id);
	printf("价格:%d\n", (*pb).price);

	printf("书名:%s\n", b.name);
	printf("序号:%s\n", b.id);
	printf("价格:%d\n", b.price);


	return 0;
}


