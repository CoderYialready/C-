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
	printf("1.ͷ������         2.β������\n");
	printf("3.ͷɾ����         4.βɾ����\n");
	printf("5.��ӡ            -1.�˳�\n");
	printf("*****************************\n");
	printf("���������ѡ��:");
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
			printf("��������Ҫ��������ݣ���-1Ϊ������־\n");
			do {
				scanf("%d", &x);
				if (x != -1) {
					SeqListPushBack(&s, x);
				}
			} while (x != -1);
			break;
		case 2:
			printf("��������Ҫ��������ݣ���-1Ϊ������־\n");
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
			printf("�����������������\n");
			break;
		}
		menu();
		scanf("%d", &option);
	}
	SeqListDestory(&s);
	return 0;
}

