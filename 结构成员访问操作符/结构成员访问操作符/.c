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
	struct Book b = { "C����","C22921",55 };
	struct Book* pb = &b;

	printf("����:%s\n", pb->name);
	printf("���:%s\n", pb->id);
	printf("�۸�:%d\n", pb->price);

	printf("����:%s\n", (*pb).name);
	printf("���:%s\n", (*pb).id);
	printf("�۸�:%d\n", (*pb).price);

	printf("����:%s\n", b.name);
	printf("���:%s\n", b.id);
	printf("�۸�:%d\n", b.price);


	return 0;
}


