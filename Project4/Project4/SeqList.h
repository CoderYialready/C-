#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10
typedef int SQDateType;

typedef struct SeqList {
	SQDateType a[MAX_SIZE];
	int size;
}SL;

void SeqListInit(SL* s);
