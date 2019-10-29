#include "stack.h"
#include "SqStack.h"

//链栈练习
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
	printf("***        链栈练习        ***\n");
	printf("***                        ***\n");
	printf("******************************\n");
	printf("***     \33[32m1.初始化一个栈\33[33m     ***\n");
	printf("***     \33[32m2.入栈\33[33m             ***\n");
	printf("***     \33[32m3.出栈\33[33m             ***\n");
	printf("***     \33[32m4.显示栈顶元素\33[33m     ***\n");
	printf("***     \33[32m5.栈长\33[33m             ***\n");
	printf("***     \33[32m6.栈是否为空\33[33m       ***\n");
	printf("***     \33[32m7.清空栈\33[33m           ***\n");
	printf("***     \33[32m8.释放栈\33[33m           ***\n");
	printf("***     \33[32m9.返回主菜单\33[33m       ***\n");
	printf("******************************\n");
	printf("\33[0m");
	printf("选择功能：");

	j = fscanf(stdin, "%d", &i);
	switch (i)
	{
	case 1:
		s = InitStack();
		system("pause");
		goto lable_1;
	case 2:
		printf("输入ID和Name:\n");
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
		printf("栈内元素个数为%d\n", s->linkSize);
		system("pause");
		goto lable_1;
	case 6:
		if (StackEmpty(s))
		{
			printf("栈非空\n");
		}
		else
		{
			printf("栈空\n");
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
		printf("非法输入,是否返回菜单(1.返回,其他.退出):");
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

//顺序栈练习
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
	printf("***       顺序栈练习       ***\n");
	printf("***                        ***\n");
	printf("******************************\n");
	printf("***     \33[32m1.清空栈\33[33m           ***\n");
	printf("***     \33[32m2.入栈\33[33m             ***\n");
	printf("***     \33[32m3.出栈\33[33m             ***\n");
	printf("***     \33[32m4.显示栈顶元素\33[33m     ***\n");
	printf("***     \33[32m5.栈长\33[33m             ***\n");
	printf("***     \33[32m6.栈是否为空\33[33m       ***\n");
	printf("***     \33[32m7.返回主菜单\33[33m       ***\n");
	printf("******************************\n");
	printf("\33[0m");
	printf("选择功能：");

	j = fscanf(stdin, "%d", &i);
	switch (i)
	{
	case 1:
		clearSqStack(s1);
		system("pause");
		goto lable_1;
	case 2:
		printf("输入ID和Name:\n");
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
		printf("栈最大长度为%d\n栈内元素个数为%d\n", MaxSize, s1->top + 1);
		system("pause");
		goto lable_1;
	case 6:
		if (SqStackEmpty(s1))
		{
			printf("栈非空\n");
		}
		else
		{
			printf("栈空\n");
		}
		system("pause");
		goto lable_1;
	case 7:
		break;
	default:
		printf("非法输入,是否返回菜单(1.返回,其他.退出):");
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
	printf("***        栈练习        ***\n");
	printf("***                      ***\n");
	printf("****************************\n");
	printf("***     \33[32m1.顺序栈练习\33[33m     ***\n");
	printf("***     \33[32m2.链栈练习\33[33m       ***\n");
	printf("***     \33[32m3.退出\33[33m           ***\n");
	printf("****************************\n");
	printf("\33[0m");
	printf("选择功能：");
	
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
		printf("非法输入,是否返回主菜单(1.返回,其他.退出):");
		i = getchar();
		i = fscanf(stdin, "%d", &j);
		if (j == 1)
		{
			goto lable_1;
		}
		break;
	}
	printf("\33[32m程序2秒后退出！");
	Sleep(1000);
	printf("\r\33[33m程序1秒后退出！");
	Sleep(1000);
	printf("\r\33[31m程序已退出！    \33[0m");
	Sleep(1000);
	exit(0);
}