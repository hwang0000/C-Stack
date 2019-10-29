#include "stack.h"
#include "SqStack.h"

//��ջ��ϰ
void StackPro() {
	int i, j;
	pLinkStack s;
	s = InitStack();
	LinkData data1, data2;
lable_1:
	system("cls");
	if (s) 
	{	printStack(s);}
	printf("\33[33m");
	printf("******************************\n");
	printf("***                        ***\n");
	printf("***        ��ջ��ϰ        ***\n");
	printf("***                        ***\n");
	printf("******************************\n");
	printf("***     \33[32m1.��ʼ��һ��ջ\33[33m     ***\n");
	printf("***     \33[32m2.��ջ\33[33m             ***\n");
	printf("***     \33[32m3.��ջ\33[33m             ***\n");
	printf("***     \33[32m4.��ʾջ��Ԫ��\33[33m     ***\n");
	printf("***     \33[32m5.ջ��\33[33m             ***\n");
	printf("***     \33[32m6.ջ�Ƿ�Ϊ��\33[33m       ***\n");
	printf("***     \33[32m7.���ջ\33[33m           ***\n");
	printf("***     \33[32m8.�ͷ�ջ\33[33m           ***\n");
	printf("***     \33[32m9.�������˵�\33[33m       ***\n");
	printf("******************************\n");
	printf("\33[0m");
	printf("ѡ���ܣ�");

	j = fscanf(stdin, "%d", &i);
	switch (i)
	{
	case 1:
		s = InitStack();
		system("pause");
		goto lable_1;
	case 2:
		printf("����ID��Name:\n");
		i = scanf("%d%s", &data1.id, data1.name);
		PushStack(s, data1);
		system("pause");
		goto lable_1;
	case 3:
		data2 = PopStack(s);
		if (strcmp(data2.name, "NULL") == 0)
		{
			system("pause");
			goto lable_1;
		}
		printf("data = %d %s\n", data2.id, data2.name);
		system("pause");
		goto lable_1;
	case 4:
		data2 = GetTopStack(s);
		if (strcmp(data2.name, "NULL") == 0)
		{
			system("pause");
			goto lable_1;
		}
		printf("data = %d %s\n", data2.id, data2.name);
		system("pause");
		goto lable_1;
	case 5:
		printf("ջ��Ԫ�ظ���Ϊ%d\n", s->linkSize);
		system("pause");
		goto lable_1;
	case 6:
		if (StackEmpty(s))
		{
			printf("ջ�ǿ�\n");
		}
		else
		{
			printf("ջ��\n");
		}
		system("pause");
		goto lable_1;
	case 7:
		clearStack(s);
		system("pause");
		goto lable_1;
	case 8:
		freeStack(s);
		system("pause");
		goto lable_1;
	case 9:
		break;
	default:
		printf("�Ƿ�����,�Ƿ񷵻ز˵�(1.����,����.�˳�):");
		i = getchar();
		i = fscanf(stdin, "%d", &j);
		if (j == 1)
		{
			goto lable_1;
		}
		break;
	}
	return;
}

//˳��ջ��ϰ
void SqStackPro() {
	int i, j;
	SqStack* s1;
	s1 = init_SqStack();
	Elemtype data1, data2;
lable_1:
	system("cls");
	printSqStack(s1);
	printf("\33[33m");
	printf("******************************\n");
	printf("***                        ***\n");
	printf("***       ˳��ջ��ϰ       ***\n");
	printf("***                        ***\n");
	printf("******************************\n");
	printf("***     \33[32m1.���ջ\33[33m           ***\n");
	printf("***     \33[32m2.��ջ\33[33m             ***\n");
	printf("***     \33[32m3.��ջ\33[33m             ***\n");
	printf("***     \33[32m4.��ʾջ��Ԫ��\33[33m     ***\n");
	printf("***     \33[32m5.ջ��\33[33m             ***\n");
	printf("***     \33[32m6.ջ�Ƿ�Ϊ��\33[33m       ***\n");
	printf("***     \33[32m7.�������˵�\33[33m       ***\n");
	printf("******************************\n");
	printf("\33[0m");
	printf("ѡ���ܣ�");

	j = fscanf(stdin, "%d", &i);
	switch (i)
	{
	case 1:
		clearSqStack(s1);
		system("pause");
		goto lable_1;
	case 2:
		printf("����ID��Name:\n");
		i = scanf("%d%s", &data1.id, data1.name);
		PushSqStack(s1, data1);
		system("pause");
		goto lable_1;
	case 3:
		data2 = PopSqStack(s1);
		if (strcmp(data2.name, "NULL") == 0)
		{
			system("pause");
			goto lable_1;
		}
		printf("data = %d %s\n", data2.id, data2.name);
		system("pause");
		goto lable_1;
	case 4:
		data2 = GetTopSqStack(s1);
		if (strcmp(data2.name, "NULL") == 0)
		{
			system("pause");
			goto lable_1;
		}
		printf("data = %d %s\n", data2.id, data2.name);
		system("pause");
		goto lable_1;
	case 5:
		printf("ջ��󳤶�Ϊ%d\nջ��Ԫ�ظ���Ϊ%d\n", MaxSize, s1->top + 1);
		system("pause");
		goto lable_1;
	case 6:
		if (SqStackEmpty(s1))
		{
			printf("ջ�ǿ�\n");
		}
		else
		{
			printf("ջ��\n");
		}
		system("pause");
		goto lable_1;
	case 7:
		break;
	default:
		printf("�Ƿ�����,�Ƿ񷵻ز˵�(1.����,����.�˳�):");
		i = getchar();
		i = fscanf(stdin, "%d", &j);
		if (j == 1)
		{
			goto lable_1;
		}
		break;
	}
	return;
}

int main() {
	int i, j;
lable_1:
	system("cls");
	printf("\33[33m");
	printf("****************************\n");
	printf("***                      ***\n");
	printf("***        ջ��ϰ        ***\n");
	printf("***                      ***\n");
	printf("****************************\n");
	printf("***     \33[32m1.˳��ջ��ϰ\33[33m     ***\n");
	printf("***     \33[32m2.��ջ��ϰ\33[33m       ***\n");
	printf("***     \33[32m3.�˳�\33[33m           ***\n");
	printf("****************************\n");
	printf("\33[0m");
	printf("ѡ���ܣ�");
	
	j = fscanf(stdin, "%d", &i);
	switch (i)
	{
	case 1:
		SqStackPro();
		goto lable_1;
	case 2:
		StackPro();
		goto lable_1;
	case 3:
		break;
	default:
		printf("�Ƿ�����,�Ƿ񷵻����˵�(1.����,����.�˳�):");
		i = getchar();
		i = fscanf(stdin, "%d", &j);
		if (j == 1)
		{
			goto lable_1;
		}
		break;
	}
	printf("\33[32m����2����˳���");
	Sleep(1000);
	printf("\r\33[33m����1����˳���");
	Sleep(1000);
	printf("\r\33[31m�������˳���    \33[0m");
	Sleep(1000);
	exit(0);
}