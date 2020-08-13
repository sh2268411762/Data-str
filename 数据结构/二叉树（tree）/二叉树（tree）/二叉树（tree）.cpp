//#include "TREE.h"
//
//typedef char BinTreeElemType;
//typedef struct BinTreeNode
//{
//	ElemType data;
//	struct BinTreeNode* leftChild;
//	struct BinTreeNode* rightChild;
//}BinTreeNode;
//typedef BinTreeNode* BinTree;
//
//
//
//
//
//
////ABC##DE##F##G#H##
//void BinTreeInit(BinTree *t);
//void BinTreeCreate(BinTree* t);
//int Size(BinTree t);
//void BinTreeVLR(BinTree t);
//void BinTreeLVR(BinTree t);
//void BinTreeLRV(BinTree t);
//void BinTreelEVEL(BinTree t);
//int Height(BinTree t);
//
///// ////////////////////////////////////////////
//int main()
//{
//	BinTree bt;
//	BinTreeInit(&bt);
//
//	BinTreeCreate(&bt);
//	printf("SIZE = %d\n", Size(bt));
//	printf("Height = %d\n", Height(bt));
//
//	//先序遍历
//	printf("VLR:");
//	BinTreeVLR(bt);
//	printf("\n");
//	//中序遍历
//	printf("LVR:");
//	BinTreeLVR(bt);
//	printf("\n");
//	//后序遍历
//	printf("LRV:");
//	BinTreeLRV(bt);
//	printf("\n");
//
//	return EXIT_SUCCESS;
//}
/////////////////////////////////////////////////
//void BinTreeInit(BinTree* t)
//{
//	*t = NULL;
//}
//
//void BinTreeCreate(BinTree* t)
//{
//	assert(t != NULL);
//	BinTreeElemType item;
//	(void)scanf("%c", &item);
//	if (item == '#')
//	{
//		*t = NULL;
//	}
//	else
//	{
//		*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
//		assert(t != NULL);
//		(*t)->data = item;
//		BinTreeCreate(&(*t)->leftChild);
//		BinTreeCreate(&(*t)->rightChild);
//	}
//}
//
//int Size(BinTree t)
//{
//	if (t == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return Size(t->leftChild) + Size(t->rightChild) + 1;
//	}
//}
//
////先序
//void BinTreeVLR(BinTree t)
//{
//	if (t != NULL)
//	{
//		printf("%c ", t->data);
//		BinTreeVLR(t->leftChild);
//		BinTreeVLR(t->rightChild);
//	}
//}
//
//void BinTreeLVR(BinTree t)
//{
//	if (t != NULL)
//	{
//		BinTreeLVR(t->leftChild);
//		printf("%c ", t->data);
//		BinTreeLVR(t->rightChild);
//	}
//}
//
//void BinTreeLRV(BinTree t)
//{
//	if (t != NULL)
//	{
//		BinTreeLRV(t->leftChild);
//		BinTreeLRV(t->rightChild);
//		printf("%c ", t->data);
//	}
//}
//
//void BinTreelEVEL(BinTree t)
//{
//
//}
//
//int Height(BinTree t)
//{
//	if (t == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int left_h = Height(t->leftChild);
//		int right_h = Height(t->rightChild);
//		return (left_h > right_h ? left_h : right_h) + 1;
//	}
//}

#include <stdio.h>

int main()
{
	char a[] = "abc.com", b[10];
	int i;
	char* p1, * p2;
	p1 = a;
	p2 = b;
	for (; *p1 != '\0'; p1++, p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';
	printf("after...\n");
	for (i = 0; b[i] != '\0'; i++)
	{
		printf("%c", b[i]);
	}
	return 0;
}