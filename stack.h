#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>


//��ջ

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

//��ջ����

//��ʼ��
pLinkStack InitStack();
//�ж�ջ��
int StackEmpty(pLinkStack);
//��ջ
int PushStack(pLinkStack, LinkData);
//��ջ
LinkData PopStack(pLinkStack);
//��ȡջ��Ԫ��
LinkData GetTopStack(pLinkStack);
//������ջ
void printStack(pLinkStack);
//���ջ
void clearStack(pLinkStack);
//�ͷ�ջ
void freeStack(pLinkStack);