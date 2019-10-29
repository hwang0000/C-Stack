#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

//Ë³ĞòÕ»

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

//Ë³ĞòÕ»ÉùÃ÷

//³õÊ¼»¯Ë³ĞòÕ»
SqStack* init_SqStack();
//ÅĞ¶ÏË³ĞòÕ»ÊÇ·ñÎª¿Õ
int SqStackEmpty(SqStack*);
//½øÕ»(Ë³ĞòÕ»)
int PushSqStack(SqStack*, Elemtype);
//³öÕ»(Ë³ĞòÕ»)
Elemtype PopSqStack(SqStack*);
//¶ÁÈ¡Õ»¶¥ÔªËØ(Ë³ĞòÕ»)
Elemtype GetTopSqStack(SqStack*);
//±éÀúË³ĞòÕ»
void printSqStack(SqStack*);
//Çå¿ÕË³ĞòÕ»
void clearSqStack(SqStack*);
