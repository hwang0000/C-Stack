#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

//˳��ջ

#define MaxSize 10

typedef struct Elemtype
{
	int id;
	char name[20];
}Elemtype;

typedef struct
{
	Elemtype data[MaxSize];
	int top;
}SqStack;

//˳��ջ����

//��ʼ��˳��ջ
SqStack* init_SqStack();
//�ж�˳��ջ�Ƿ�Ϊ��
int SqStackEmpty(SqStack*);
//��ջ(˳��ջ)
int PushSqStack(SqStack*, Elemtype);
//��ջ(˳��ջ)
Elemtype PopSqStack(SqStack*);
//��ȡջ��Ԫ��(˳��ջ)
Elemtype GetTopSqStack(SqStack*);
//����˳��ջ
void printSqStack(SqStack*);
//���˳��ջ
void clearSqStack(SqStack*);
