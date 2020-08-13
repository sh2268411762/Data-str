//#include "DS.h"
//
//
//typedef struct SCListNode
//{
//	int data;          //数据域
//	struct SCListNode *next;   //指针域
//}SCListNode;
//
//typedef SCListNode* SCList;
//
//void Menu()
//{
//	printf("****************************************************************\n");
//	printf("** 1、尾插(push_back)               2、头插(push_front)       **\n");
//	printf("** 3、打印单链表(show_Slist)        4、尾删(pop_back)         **\n");
//	printf("** 5、头删(pop_front)               6、单链表长度(length)     **\n");
//	printf("** 7、查找(find)                    8、按值删除(erase_val)    **\n");
//	printf("** 9、排序(升)(sort)                0、退出(exit)             **\n");
//	printf("** 11、按值插入(insert_val)         12、头元素(front)         **\n");
//	printf("** 13、尾元素(back)                 14、删除(erase_all)       **\n");
//	printf("** 15、清除(clear)                  16、转置(reverse)         **\n");
//	printf("****************************************************************\n");
//	printf("请选择：>");
//}
//
//void SCListInit(SCList *phead)//初始化
//{
////	assert(phead != NULL);
//	*phead = NULL;
//}
//
//void SCListPushBack(SCList* phead, ElemType x)
//{
//	assert(phead != NULL);
//	SCListNode* s = (SCListNode*)malloc(sizeof(SCListNode));
//	assert(s != NULL);
//	//申请结点
//	s->data = x;
//
//	//链接结点
//	SCListNode* p = *phead;//指向第一个结点
//	if (p == NULL)//插入的结点为第一个结点
//	{
//		*phead = s;
//	}
//	else
//	{
//		while (p->next != *phead)
//		{
//			p = p->next;
//		}//找到最后一个结点
//		p->next = s;
//	}
//	s->next = *phead;
//}
//
//bool SCListEmpty(SCList phead)
//{
//	if (phead->next == phead)
//	{
//		return true;
//	}
//	return false;
//}
//void SCListShow(SCList phead)
//{
//	assert(phead != NULL);
//	SCListNode* p = phead;
//
//	if (SCListEmpty(phead))
//	{
//		return;
//	}
//	else
//	{
//		while (p->next != phead)
//		{
//			printf("%d->", p->data);
//			p = p->next;
//		}
//		printf("%d->", p->data);//访问最后一个元素
//		printf("单链表打印完成.\n");
//	}
//}
//
//void SCListPushFront(SCList* phead, ElemType x)
//{
//	assert(phead != NULL);
//	SCListNode* s = (SCListNode*)malloc(sizeof(SCListNode));
//	assert(s != NULL);
//	SCListNode* p = *phead;//指向第一个结点
//	//申请结点
//	s->data = x;
//
//	//链接结点
//	s->next = *phead;
//	while (p->next != *phead)
//	{
//		p = p->next;
//	}//找到最后一个结点
//	p->next = s;
//	*phead = s;
//}
//
//size_t SCListLength(SCList phead)//长度
//{
//	assert(phead != NULL);
//	size_t size = 0;
//	SCListNode* p = phead;
//
//	while (p->next != phead)
//	{
//		size++;
//		p = p->next;
//	}
//	size++;
//	return size;
//}
//
//void SCListPopBack(SCList* phead)//尾删
//{
//	assert(phead != NULL);
//	SCListNode* p = *phead;
//	SCListNode* prev = NULL;//p的前驱
//
//	if (p != NULL)
//	{
//		while (p->next != *phead)
//		{
//			prev = p;
//			p = p->next;
//		}
//
//		if (prev == *phead)
//		{
//			*phead = NULL;
//		}
//		else
//		{
//			prev->next = *phead;
//		}
//		free(p);
//	}
//}
//
//void SCListPopFront(SCList* phead)//头删
//{
//	assert(phead != NULL);
//	SCListNode* p = *phead;
//	SCListNode* q = p->next;
//
//	if (p != NULL)
//	{
//		while (q->next != *phead)
//		{
//			q = q->next;
//		}//找到最后一个结点
//
//		*phead = p->next;
//		free(p);
//		q->next = *phead;
//	}
//}
//
//SCListNode* SCListFind(SCList phead, ElemType key)
//{
//	SCListNode* p = phead;
//	while (p->next != phead && p->data != key)
//	{
//		p = p->next;
//	}
//
//	if (p->data == key)
//	{
//		return p;
//	}
//	else
//	{
//		return NULL;
//	}
//}
//
//void SCListEraseByVal(SCList *phead, ElemType del)
//{
//	assert(phead != NULL);
//	SCListNode* p = SCListFind(*phead, del);
//	if (p == NULL)
//	{
//		printf("删除失败......\n");
//		return;
//	}
//	
//	//存在要删除的结点
//	if (p->next == *phead)//删除末尾结点
//	{
//		SCListPopBack(phead);
//	}
//	else
//	{
//		SCListNode* q = p->next;
//		p->data = q->data;
//		p->next = q->next;
//		free(q);
//		printf("删除成功......\n");
//	}
//}
//
//void SCListSortAsc(SCList* phead)
//{
//	assert(phead != NULL);
//
//	if (SCListLength(*phead) <= 1)
//	{
//		return;
//	}
//	SCListNode* temp = *phead, * prev = NULL;
//	SCListNode* p = *phead;
//	SCListNode *q = p->next;
//	p->next = NULL;
//
//	while (q != NULL)
//	{
//		p = q;
//		q = q->next;
//		//寻找插入位置
//		while (temp->next != *phead && p->data > temp->data)
//		{
//			prev = temp;
//			temp = temp->next;
//		}
//
//		if (prev == NULL)
//		{
//			p->next = *phead;
//			*phead = p;
//		}
//		else
//		{
//			p->next = prev->next;
//			prev->next = p;
//		}
//		temp = *phead;
//		prev = NULL;
//	}
//}
//
////void SListInsertByVal(SList* phead, ElemType key)
////{
////	assert(phead != NULL);
////	SListNode* p = *phead, * prev = NULL;
////	while (p != NULL && key > p->data)
////	{
////		prev = p;
////		p = p->next;
////	}
//
////	SListNode* s = (SListNode*)malloc(sizeof(SListNode));
////	assert(s != NULL);
////	s->data = key;
////	if (prev == NULL)
////	{
////		s->next = *phead;
////		*phead = s;
////	}
////	else
////	{
////		s->next = prev->next;
////		prev->next = s;
////	}
////}
//
//ElemType SCListFront(SCList phead)
//{
//	assert(phead != NULL);
//	return phead->data;
//}
//ElemType SCListBack(SCList phead)
//{
//	assert(phead != NULL);
//	SCList p = phead;
//	while (p->next != phead)
//	{
//		p = p->next;
//	}
//	return p->data;
//}
//
////void SListEraseAll(SList* phead, ElemType x) 
////{
////	//
////}
//
//void SCListClear(SCList *phead)
//{
//	assert(phead != NULL);
//	SCListNode* p = *phead;
//	SCListNode* q = *phead;
//
//	do
//	{
//		p = *phead;
//		*phead = p->next;
//		free(p);
//	}while(*phead != q);
//}
//
//void SCListDestroy(SCList* phead)//摧毁单链表
//{
//	SCListClear(phead);
//}
//
////void SListReverse(SList *phead)
////{
////	assert(phead != NULL);
////	SListNode* p = *phead;
////	SListNode* q = p->next;
////
////	p->next = NULL;
////	while (q != NULL)
////	{
////		p = q;
////		q = q->next;
////		p->next = *phead;
////		*phead = p;
////	}
////}
//
//
//
//
//
//
//int main()
//{
//	SCListNode* p = NULL;
//	SCList list;	
//	SCListInit(&list);
//
//	ElemType item;
//	int select = 0;
//	Menu();
//	(void)scanf("%d", &select);
//	do
//	{
//		switch (select)
//		{
//		case 1:
//			printf("尾部插入......\n");
//			printf("请输入要插入的数据<-1结束>:");
//			while ((void)scanf("%d", &item),item != -1)
//			{
//				SCListPushBack(&list, item);
//			}
//			printf("尾部插入成功......\n");
//			break;
//
//		case 2:
//			printf("头部插入......\n");
//			printf("请输入要插入的数据<-1结束>:");
//			while ((void)scanf("%d", &item),item != -1)
//			{
//				SCListPushFront(&list, item);
//			}
//			printf("头部插入成功......\n");
//			break;
//
//		case 3:
//			printf("打印单链表......\n");
//			SCListShow(list);
//			printf("打印单链表完成......\n");
//			break;
//
//		case 4:
//			printf("尾删......\n");
//			SCListPopBack(&list);
//			printf("尾部删除完成......\n");
//			break;
//
//		case 5:
//			printf("头删......\n");
//			SCListPopFront(&list);
//			printf("头部删除完成......\n");
//			break;
//
//		case 6:
//			printf("单链表长度......\n");
//			printf("Length = %d\n", SCListLength(list));
//			printf("长度打印完成\n");
//			break;
//
//		case 7:
//			printf("查找......\n");
//			printf("请输入要查找的值：>");
//			(void)scanf("%d", &item);
//			p = SCListFind(list, item);
//			if (p == NULL)
//			{
//				printf("数据查找失败\n");
//			}
//			else
//			{
//				printf("数据查找成功\n");
//			}
//			break;
//
//		case 8:
//			printf("按值删除......\n请输入要删除的值：>");
//			(void)scanf("%d", &item);
//			SCListEraseByVal(&list, item);
//			break;
//
//		case 9:
//			printf("升序排序......\n");
//			SCListSortAsc(&list);
//			printf("排序完成......\n");
//			break;
//
//		case 10:
//			
//			break;
//
//		case 11:
//			printf("按值插入......\n");
//			printf("请输入要插入的值：>");
//			(void)scanf("%d", &item);
////			SListSortAsc(&list);
////			SListInsertByVal(&list, item);
//			printf("按值插入完成......\n");
//			break;
//
//		case 12:
//			printf("链表头元素 = %d\n", SCListFront(list));
//			printf("头部元素打印完成......\n");
//			break;
//
//		case 13:
//			printf("链表尾元素 = %d\n", SCListBack(list));
//			printf("尾部元素打印完成......\n");
//			break;
//
//		case 14:
//			printf("请输入要删除的元素：>");
//			(void)scanf("%d", &item);
////			SListEraseAll(&list, item);
//			printf("删除完成......\n");
//			break;
//
//		case 15:
//			printf("清空链表......\n");
//			SCListClear(&list);
//			printf("清空完成......\n");
//			break;
//
//		case 16:
//			printf("转置单链表......\n");
////			SListReverse(&list);
//			printf("转置完成......\n");
//			break;
//
//		case 0:
//			printf("退出！！！");
//			break;
//
//		default:
//			printf("输入有误，请重新输入！！！");
//			break;
//		}
//		printf("\n");
//		Menu();
//		(void)scanf("%d", &select);
//	} while (select);
//
//	printf("单链表摧毁开始......\n");
//	for (int i = 10; i >= 0; i--)
//	{
//		printf("%d......\n", i);
//		Sleep(1000);
//	}
//	SCListDestroy(&list);
//	printf("单链表摧毁成功\n");
//	return EXIT_SUCCESS;
//}