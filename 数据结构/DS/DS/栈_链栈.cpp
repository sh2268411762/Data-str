//#include "DS.h"
////后进入放入头部
//
//typedef struct LinkStackNode
//{
//	ElemType data;
//	struct LinkStackNode* link;
//}LinkStackNode;
//typedef LinkStackNode* LinkStack;
//
//void LinkStackInit(LinkStack* pst);
//void LinkStackPush(LinkStack* pst, ElemType x);
//void LinkStackPop(LinkStack* pst);
//ElemType LinkStackTop(LinkStack* pst);
//void LinkStackShow(LinkStack* pst);
//int LinkStackSize(LinkStack* pst);
//void LinkStackDestroy(LinkStack* pst);
//
//////////////////////////////////////////////////////
//int main()
//{
//	LinkStack st;
//	LinkStackInit(&st);
//
//	LinkStackPush(&st, 1);
//	LinkStackPush(&st, 2);
//	LinkStackPush(&st, 3);
//	LinkStackPush(&st, 4);
//	LinkStackPush(&st, 5);
//	LinkStackShow(&st);
//	printf("top  = %d\n", LinkStackTop(&st));
//	printf("size = %d\n", LinkStackSize(&st));
//	LinkStackPop(&st);
//	LinkStackPop(&st);
//	LinkStackShow(&st);
//
//	printf("top  = %d\n", LinkStackTop(&st));
//	printf("size = %d\n", LinkStackSize(&st));
//
//	LinkStackDestroy(&st);
//	return EXIT_SUCCESS;
//}
//
//
//
////////////////////////////////////////////////////////
//void LinkStackInit(LinkStack* pst)
//{
//	assert(pst != NULL);
//	*pst = NULL;
//}
//
//void LinkStackPush(LinkStack* pst, ElemType x)
//{
//	assert(pst != NULL);
//	LinkStackNode* node = (LinkStackNode*)malloc(sizeof(LinkStackNode));//
//	assert(node != NULL);
//	node->data = x;
//	node->link = *pst;
//	*pst = node;
//}
//
//void LinkStackPop(LinkStack* pst)
//{
//	assert(pst != NULL);
//	if (*pst != NULL)
//	{
//		LinkStackNode* p = *pst;
//		*pst = p->link;
//		free(p);
//	}
//}
//
//ElemType LinkStackTop(LinkStack* pst)
//{
//	assert(pst != NULL && *pst != NULL);
//
//	return (*pst)->data;
//}
//
//void LinkStackShow(LinkStack* pst)
//{
//	assert(pst != NULL);
//	LinkStackNode* p = *pst;
//	while (p != NULL)
//	{
//		printf("| %d |\n", p->data);
//		p = p->link;
//	}
//	printf("|___|\n");
//}
//
//int LinkStackSize(LinkStack* pst)
//{
//	assert(pst != NULL);
//	int size = 0;
//	LinkStackNode* p = *pst;
//	while (p != NULL)
//	{
//		size++;
//		p = p->link;
//	}
//	return size;
//}
//
//void LinkStackDestroy(LinkStack* pst)
//{
//	assert(pst != NULL);
//	LinkStackNode* p = *pst;
//	while (p != NULL)
//	{
//		*pst = p->link;
//		free(p);
//		p = *pst;
//	}
//}
