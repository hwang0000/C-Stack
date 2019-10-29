#include "stack.h"

//链栈实现

//初始化链栈
pLinkStack InitStack() 
{
	pLinkStack s;
	s = (pLinkStack)calloc(1, sizeof(LinkStack));
	s->next = NULL;
	s->linkSize = 0;
	return s;
}

//判断栈空
int StackEmpty(pLinkStack s) 
{
	if (NULL == s->next) //栈空
		return 0;
	else //栈非空
		return 1;
}

//入栈
int PushStack(pLinkStack s, LinkData x) 
{
	pLinkStack t;
	t = (pLinkStack)calloc(1, sizeof(LinkStack));
	if (t) 
	{
		t->linkSize = s->linkSize + 1;
		t->data = x;
		t->next = s->next;
		s->next = t;
		s->linkSize++;
		return 1;
	}
	printf("空间不足，入栈失败！\n");
	return 0;
}

//出栈
LinkData PopStack(pLinkStack s) 
{
	LinkData x;
	if (NULL == s->next) {
		printf("栈为空，出栈失败！\n");
		x.id = 0;
		strcpy(x.name, "NULL");
		return x;
	}
	pLinkStack tmp = s->next;
	x = tmp->data;
	s->next = tmp->next;
	free(tmp);
	tmp = NULL;
	s->linkSize--;
	return x;
}

//读取栈顶元素
LinkData GetTopStack(pLinkStack s)
{
	LinkData x;
	if (NULL == s->next) {
		printf("栈为空！\n");
		x.id = 0;
		strcpy(x.name, "NULL");
		return x;
	}
	x = s->next->data;
	return x;
}

//遍历链栈
void printStack(pLinkStack s) 
{
	if (NULL == s->next) {
		printf("栈空\n");
		return;
	}
	while (s->next)
	{
		printf("| %d %s\n", s->next->data.id, s->next->data.name);
		s = s->next;
	}
	printf("|--------------------\n");
	printf("|栈底\n");
	return;
}

//清空栈
void clearStack(pLinkStack s) 
{
	pLinkStack tmp;
	while (s->next)
	{
		tmp = s->next;
		s->next = tmp->next;
		free(tmp);
		tmp = NULL;
	}
	printf("栈空\n");
	s->linkSize = 0;
	return;
}

//释放栈
void freeStack(pLinkStack* s) 
{
	pLinkStack tmp;
	while ((*s)->next)
	{
		tmp = (*s)->next;
		(*s)->next = tmp->next;
		free(tmp);
		tmp = NULL;
	}
	free(*s);
	*s = NULL;
	printf("释放栈\n");
	return;
}
