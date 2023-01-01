#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef int SQDateType;
typedef struct SeqList 
{
	SQDateType* a;
	int size;
	int capacity;
}SL;

void SeqListInit(SL* ps);
//Í·²å Î²²å Í·É¾ Î²É¾
void SeqListPushBack(SL* ps,SQDateType x);
void SeqListPushFront(SL* ps,SQDateType x);
void SeqListPopBack(SL*ps);
void SeqListPopFront(SL*ps);
void SeqListInsert(SL* ps, int pos, SQDateType x);
void SeqListErase(SL* ps, int pos);
void SeqListDestory(SL* ps);

int SeqListFind(SL* ps, SQDateType x);
void SeqListModity(SL* ps, int pos, SQDateType x);

void SeqListprint(SL* ps);
