#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void SeqList1()
{
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s,1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListprint(&s);
	SeqListModity(&s, 2, 5);
	SeqListprint(&s);
}
void menu() {
	printf("*****************************\n");
	printf("1.头插数据         2.尾插数据\n");
	printf("3.头删数据         4.尾删数据\n");
	printf("5.打印            -1.退出\n");
	printf("*****************************\n");
	printf("请输入你的选项:");
}

int main()
{
	SL s;
	SeqListInit(&s);
	int option = 0;
	SQDateType x = 0;
	menu();
	scanf("%d", &option);
	while (option != -1) {
		switch (option) {
		case 1:
			printf("请输入你要插入的数据，以-1为结束标志\n");
			do {
				scanf("%d", &x);
				if (x != -1) {
					SeqListPushBack(&s, x);
				}
			} while (x != -1);
			break;
		case 2:
			printf("请输入你要插入的数据，以-1为结束标志\n");
			do {
				scanf("%d", &x);
				if (x != -1) {
					SeqListPushFront(&s, x);
				}
			} while (x != -1);
			break;
		case 3:
			SeqListPopFront(&s);
			break;
		case 4:
			SeqListPopBack(&s);
			break;
		case 5:
			SeqListprint(&s);
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
		menu();
		scanf("%d", &option);
	}
	SeqListDestory(&s);
	return 0;
}

