#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void SeqListInit(SL* s)
{
	memset(s->a, 0, sizeof(SQDateType) * MAX_SIZE);
	s->size = 0;
}
