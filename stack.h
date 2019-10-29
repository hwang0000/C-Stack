#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>


//链栈

typedef struct LinkData 
{
	int id;
	char name[20];
}LinkData;

typedef struct Linknode
{
	LinkData data;
	Linknode* next;
	int linkSize;
}LinkStack, * pLinkStack;

//链栈声明

//初始化
pLinkStack InitStack();
//判断栈空
int StackEmpty(pLinkStack);
//入栈
int PushStack(pLinkStack, LinkData);
//出栈
LinkData PopStack(pLinkStack);
//读取栈顶元素
LinkData GetTopStack(pLinkStack);
//遍历链栈
void printStack(pLinkStack);
//清空栈
void clearStack(pLinkStack);
//释放栈
void freeStack(pLinkStack*);
