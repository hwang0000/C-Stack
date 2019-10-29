#include "SqStack.h"

//顺序栈实现

//初始化顺序栈
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
		printf("空间不足!\n");
		return NULL;
	}
}

//判断顺序栈是否为空
int SqStackEmpty(SqStack* s)
{
	if (-1 == s->top)//栈空
		return 0;
	else //栈非空
		return 1;
}

//进栈(顺序栈)
int PushSqStack(SqStack* s, Elemtype x)
{
	if (s->top == MaxSize - 1)
	{
		printf("顺序栈已满，进栈失败！\n");
		return 0;
	}
	s->top++;
	s->data[s->top] = x;
	printf("入栈成功！\n");
	return 1;
}

//出栈(顺序栈)
Elemtype PopSqStack(SqStack* s)
{
	Elemtype x;
	if (-1 == s->top)
	{
		printf("顺序栈为空，出栈失败！\n");
		x.id = 0;
		strcpy(x.name, "NULL");
		return x;
	}
	x = s->data[s->top];
	s->top--;
	return x;
}

//读取栈顶元素(顺序栈)
Elemtype GetTopSqStack(SqStack* s)
{
	if (-1 == s->top)
	{
		printf("顺序栈为空，读取失败！\n");
		Elemtype x;
		x.id = 0;
		strcpy(x.name, "NULL");
		return x;
	}
	return s->data[s->top];
}

//遍历顺序栈
void printSqStack(SqStack* s)
{
	int t;
	t = s->top;
	if (-1 == s->top)
	{
		printf("栈空\n");
	}
	else
	{
		while (t != -1)
		{
			printf("|%d %s \n", (s->data[t]).id, (s->data[t]).name);
			t--;
		}
		printf("|--------------------\n");
		printf("|栈底\n");
	}
}

//清空顺序栈
void clearSqStack(SqStack* s) 
{
	s->top = -1;
	printf("已清空栈\n");
}