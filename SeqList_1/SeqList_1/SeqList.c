#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void SeqListInit(SL* ps) 
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListprint(SL*ps){
	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListCheckcapacity(SL* ps) {
	if (ps->size == ps->capacity) {
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDateType* tmp = (SQDateType*)realloc(ps->a, newcapacity * sizeof(SQDateType));
		if (tmp == NULL) {
			printf("realloc failed\n");
			exit(-1);
		}
		else {
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
}
void SeqListPushBack(SL* ps, SQDateType x) {
	SeqListCheckcapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPushFront(SL* ps,SQDateType x) {
	SeqListCheckcapacity(ps);
	int end = ps->size - 1;
	while (end >= 0) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopBack(SL*ps) {
	assert(ps->size > 0);
	ps->size--;
}
void SeqListPopFront(SL* ps) {
	assert(ps->size > 0);
	int start = 1;
	while (start < ps->size) {
		ps->a[start - 1] = ps->a[start];
		start++;;
	}
	ps->size--;
}
void SeqListInsert(SL* ps, int pos, SQDateType x) {
	SeqListCheckcapacity(ps);
	assert(ps->size > pos && ps->size > 0);
	int end = ps->size;
	while (end > pos) {
		ps->a[end] = ps->a[end - 1];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqListErase(SL* ps, int pos) {
	assert(ps->size > pos);
	int start = pos + 1;
	while (start < ps->size) {
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	ps->size--;
}
void SeqListDestory(SL* ps) {
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
int SeqListFind(SL* ps, SQDateType x) {
	for (int i = 0; i < ps->size; i++) {
		if (ps->a[i] == x) {
			return i;
		}
	}
	return -1;
}
void SeqListModity(SL* ps, int pos, SQDateType x) {
	assert(pos < ps->size);
	ps->a[pos] = x;
}





