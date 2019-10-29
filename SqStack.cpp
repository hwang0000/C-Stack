#include "SqStack.h"

//˳��ջʵ��

//��ʼ��˳��ջ
SqStack* init_SqStack()
{
	SqStack* s;
	s = (SqStack*)calloc(1, sizeof(SqStack));
	if (s)
	{
		s->top = -1;
		return s;
	}
	else
	{
		printf("�ռ䲻��!\n");
		return NULL;
	}
}

//�ж�˳��ջ�Ƿ�Ϊ��
int SqStackEmpty(SqStack* s)
{
	if (-1 == s->top)//ջ��
		return 0;
	else //ջ�ǿ�
		return 1;
}

//��ջ(˳��ջ)
int PushSqStack(SqStack* s, Elemtype x)
{
	if (s->top == MaxSize - 1)
	{
		printf("˳��ջ��������ջʧ�ܣ�\n");
		return 0;
	}
	s->top++;
	s->data[s->top] = x;
	printf("��ջ�ɹ���\n");
	return 1;
}

//��ջ(˳��ջ)
Elemtype PopSqStack(SqStack* s)
{
	Elemtype x;
	if (-1 == s->top)
	{
		printf("˳��ջΪ�գ���ջʧ�ܣ�\n");
		x.id = 0;
		strcpy(x.name, "NULL");
		return x;
	}
	x = s->data[s->top];
	s->top--;
	return x;
}

//��ȡջ��Ԫ��(˳��ջ)
Elemtype GetTopSqStack(SqStack* s)
{
	if (-1 == s->top)
	{
		printf("˳��ջΪ�գ���ȡʧ�ܣ�\n");
		Elemtype x;
		x.id = 0;
		strcpy(x.name, "NULL");
		return x;
	}
	return s->data[s->top];
}

//����˳��ջ
void printSqStack(SqStack* s)
{
	int t;
	t = s->top;
	if (-1 == s->top)
	{
		printf("ջ��\n");
	}
	else
	{
		while (t != -1)
		{
			printf("|%d %s \n", (s->data[t]).id, (s->data[t]).name);
			t--;
		}
		printf("|--------------------\n");
		printf("|ջ��\n");
	}
}

//���˳��ջ
void clearSqStack(SqStack* s) 
{
	s->top = -1;
	printf("�����ջ\n");
}