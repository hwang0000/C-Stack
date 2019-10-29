#include "stack.h"

//¡¥’ª µœ÷

//≥ı ºªØ¡¥’ª
pLinkStack InitStack() 
{
	pLinkStack s;
	s = (pLinkStack)calloc(1, sizeof(LinkStack));
	s->next = NULL;
	s->linkSize = 0;
	return s;
}

//≈–∂œ’ªø’
int StackEmpty(pLinkStack s) 
{
	if (NULL == s->next) //’ªø’
		return 0;
	else //’ª∑«ø’
		return 1;
}

//»Î’ª
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
	printf("ø’º‰≤ª◊„£¨»Î’ª ß∞‹£°\n");
	return 0;
}

//≥ˆ’ª
LinkData PopStack(pLinkStack s) 
{
	LinkData x;
	if (NULL == s->next) {
		printf("’ªŒ™ø’£¨≥ˆ’ª ß∞‹£°\n");
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

//∂¡»°’ª∂•‘™Àÿ
LinkData GetTopStack(pLinkStack s)
{
	LinkData x;
	if (NULL == s->next) {
		printf("’ªŒ™ø’£°\n");
		x.id = 0;
		strcpy(x.name, "NULL");
		return x;
	}
	x = s->next->data;
	return x;
}

//±È¿˙¡¥’ª
void printStack(pLinkStack s) 
{
	if (NULL == s->next) {
		printf("’ªø’\n");
		return;
	}
	while (s->next)
	{
		printf("| %d %s\n", s->next->data.id, s->next->data.name);
		s = s->next;
	}
	printf("|--------------------\n");
	printf("|’ªµ◊\n");
	return;
}

//«Âø’’ª
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
	printf("’ªø’\n");
	s->linkSize = 0;
	return;
}

// Õ∑≈’ª
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
	printf(" Õ∑≈’ª\n");
	return;
}
