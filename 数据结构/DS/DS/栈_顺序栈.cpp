//#include "DS.h"
////stack   -->ָ��ջ�ռ䣨base��   -->������capacity��    -->ջ��Ԫ�أ�top��
//#define STACK_DEFAULT__SIZE 8
//typedef struct SeqStack
//{
//	ElemType* base;   //ջ�ռ�
//	size_t capacity;  //����
//	int top;          //ջ��ָ��
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
//ElemType SeqStackTop(SeqStack* pst);  //ȡջ��Ԫ��
//void SeqStackTop2(SeqStack* pst, ElemType* top_val);
//void SeqStackShow(SeqStack* pst);
//void SeqStackDestroy(SeqStack* pst);
//int SeqStackSize(SeqStack* pst);//Ԫ�ظ���
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
//	printf("ջ��[%d]��Ԫ��.\n\n", SeqStackSize(&st));
//	while (!IsEmpty(&st))
//	{
//		top_val = SeqStackTop(&st);
//		SeqStackPop(&st);
//		printf("[%d]��ջ.\n", top_val);
//	}
//
//	SeqStackDestroy(&st);
//	printf("�ݻ�ջ.\n");
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
//		printf("ջ������[%d]������ջ.\n",x);
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
//		printf("ջ�ѿգ����ܳ�ջ.\n");
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
//		printf("ջ�ѿգ�����ȡջ��Ԫ��.\n");
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
