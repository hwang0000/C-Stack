#include "stack.h"

//��ջʵ��

//��ʼ����ջ
pLinkStack InitStack() 
{
	pLinkStack s;
	s = (pLinkStack)calloc(1, sizeof(LinkStack));
	s->next = NULL;
	s->linkSize = 0;
	return s;
}

//�ж�ջ��
int StackEmpty(pLinkStack s) 
{
	if (NULL == s->next) //ջ��
		return 0;
	else //ջ�ǿ�
		return 1;
}

//��ջ
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
	printf("�ռ䲻�㣬��ջʧ�ܣ�\n");
	return 0;
}

//��ջ
LinkData PopStack(pLinkStack s) 
{
	LinkData x;
	if (NULL == s->next) {
		printf("ջΪ�գ���ջʧ�ܣ�\n");
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

//��ȡջ��Ԫ��
LinkData GetTopStack(pLinkStack s)
{
	LinkData x;
	if (NULL == s->next) {
		printf("ջΪ�գ�\n");
		x.id = 0;
		strcpy(x.name, "NULL");
		return x;
	}
	x = s->next->data;
	return x;
}

//������ջ
void printStack(pLinkStack s) 
{
	if (NULL == s->next) {
		printf("ջ��\n");
		return;
	}
	while (s->next)
	{
		printf("| %d %s\n", s->next->data.id, s->next->data.name);
		s = s->next;
	}
	printf("|--------------------\n");
	printf("|ջ��\n");
	return;
}

//���ջ
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
	printf("ջ��\n");
	s->linkSize = 0;
	return;
}

//�ͷ�ջ
void freeStack(pLinkStack s) 
{
	pLinkStack tmp;
	while (s->next)
	{
		tmp = s->next;
		s->next = tmp->next;
		free(tmp);
		tmp = NULL;
	}
	free(s);
	s = NULL;
	printf("�ͷ�ջ\n");
	return;
}
