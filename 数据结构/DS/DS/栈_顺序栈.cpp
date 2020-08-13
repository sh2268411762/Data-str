//#include "DS.h"
////stack   -->指向栈空间（base）   -->容量（capacity）    -->栈顶元素（top）
//#define STACK_DEFAULT__SIZE 8
//typedef struct SeqStack
//{
//	ElemType* base;   //栈空间
//	size_t capacity;  //容量
//	int top;          //栈顶指针
//}SeqStack;
//
//
//
//
//bool IsEmpty(SeqStack* pst);
//bool IsFull(SeqStack* pst);
//void SeqStackInit(SeqStack* pst,int size);
//void SeqStackPush(SeqStack* pst,ElemType x);
//void SeqStackPop(SeqStack* pst);
//ElemType SeqStackTop(SeqStack* pst);  //取栈顶元素
//void SeqStackTop2(SeqStack* pst, ElemType* top_val);
//void SeqStackShow(SeqStack* pst);
//void SeqStackDestroy(SeqStack* pst);
//int SeqStackSize(SeqStack* pst);//元素个数
/////////////////////////////////////////////////////////////
//int main()
//{
//	SeqStack st;
//	SeqStackInit(&st, 10);
//
//	SeqStackPush(&st, 1);
//	SeqStackPush(&st, 2);
//	SeqStackPush(&st, 3);
//	SeqStackPush(&st, 4);
//	SeqStackPush(&st, 5);
//	SeqStackPush(&st, 6);
//	SeqStackPush(&st, 7);
//	SeqStackPush(&st, 8);
//	SeqStackShow(&st);
//
//	int top_val;
//	puts(" ");
//	printf("栈有[%d]个元素.\n\n", SeqStackSize(&st));
//	while (!IsEmpty(&st))
//	{
//		top_val = SeqStackTop(&st);
//		SeqStackPop(&st);
//		printf("[%d]出栈.\n", top_val);
//	}
//
//	SeqStackDestroy(&st);
//	printf("摧毁栈.\n");
//	return EXIT_SUCCESS;
//}
//
//
//
//
/////////////////////////////////////////////////////////////
//bool IsFull(SeqStack* pst)
//{
//	assert(pst != NULL);
//	return pst->top >= pst->capacity;
//}
//
//bool IsEmpty(SeqStack* pst)
//{
//	assert(pst != NULL);
//	return pst->top == 0;
//}
//void SeqStackInit(SeqStack* pst,int size)
//{
//	pst->capacity = size > STACK_DEFAULT__SIZE ? size : STACK_DEFAULT__SIZE;
//	pst->base = (ElemType*)malloc(sizeof(ElemType) * pst->capacity);
//	pst->top = 0;
//}
//
//void SeqStackPush(SeqStack* pst,ElemType x)
//{
//	assert(pst != NULL);
//	if (IsFull(pst))
//	{
//		printf("栈已满，[%d]不能入栈.\n",x);
//		return;
//	}
//	pst->base[pst->top++] = x;
//}
//
//void SeqStackPop(SeqStack* pst)
//{
//	assert(pst != NULL);
//	if (IsEmpty(pst))
//	{
//		printf("栈已空，不能出栈.\n");
//		return;
//	}
//
//	pst->top--;
//}
//
//void SeqStackTop2(SeqStack* pst, ElemType* top_val)
//{
//	assert(pst != NULL);
//	if (IsEmpty(pst))
//	{
//		printf("栈已空，不能取栈顶元素.\n");
//		return;
//	}
//
//	*top_val = pst->base[pst->top - 1];
//}
//
//ElemType SeqStackTop(SeqStack* pst)
//{
//	assert(pst != NULL);
//	assert(!IsEmpty(pst));
//
//	return pst->base[pst->top - 1];
//}
//
//void SeqStackShow(SeqStack* pst)
//{
//	assert(pst != NULL);
//	for (int i = pst->top - 1; i >= 0; i--)
//	{
//		printf("| %d |\n", pst->base[i]);
//	}
//	printf("|___|\n");
//}
//
//void SeqStackDestroy(SeqStack* pst)
//{
//	assert(pst != NULL);
//	free(pst->base);
//	pst->base = NULL;
//	pst->capacity = pst->top = 0;
//}
//
//int SeqStackSize(SeqStack* pst)
//{
//	assert(pst != NULL);
//	return pst->top;
//}
