//#include "DS.h"
//
//
//typedef struct DCListNode
//{
//	ElemType data;
//	struct DCListNode* next;
//	struct DCListNode* prev;
//}DCListNode;
//
//typedef DCListNode* DCList;
//typedef int ElemType;
//
//void Menu()
//{
//	printf("****************************************************************\n");
//	printf("** 1、尾插(push_back)               2、头插(push_front)       **\n");
//	printf("** 3、打印单链表(show_Slist)        4、尾删(pop_back)         **\n");
//	printf("** 5、头删(pop_front)               6、单链表长度(length)     **\n");
//	printf("** 7、查找(find)                    8、按值删除(erase_val)    **\n");
//	printf("** 9、排序(升)(sort)                0、退出(exit)             **\n");
//	printf("** 10、按值插入(insert_val)         11、头元素(front)         **\n");
//	printf("** 12、尾元素(back)                 13、删除(erase_all)       **\n");
//	printf("** 14、清除(clear)                  15、转置(reverse)         **\n");
//	printf("****************************************************************\n");
//	printf("请选择：>");
//}
//
//DCListNode* _Buynode(ElemType v = ElemType())
//{
//	DCListNode* _S = (DCListNode*)malloc(sizeof(DCListNode));
//	assert(_S != NULL);
//	_S->data = v;
//	_S->next = _S->prev = _S;
//	return _S;
//}
//void DCListInit(DCList *phead)//初始化
//{
//	//DCListNode *s = (DCListNode*)malloc(sizeof(DCListNode));
//	//assert(s != NULL);
//	//s->next = s->prev = s;
//
//	*phead = _Buynode();
//}
//
//
//void DCListPushBack(DCList* phead, ElemType x)
//{
//	assert(phead != NULL);
//	DCListNode* s = _Buynode(x);
//	DCListNode* head = *phead;
//
//	//链接结点
//	s->prev = head->prev;
//	s->next = head;
//	head->prev->next = s;//s->prev->next = s
//	head->prev = s;
//	
//}
//
//void DCListShow(DCList phead)
//{
////	assert(phead != NULL);
//	DCListNode* p = phead->next;
//	while (p != phead)
//	{
//		printf("%d->", p->data);
//		p = p->next;
//	}
//	printf("双链表打印完成.\n");
//}
//
//void DCListPushFront(DCList* phead, ElemType x)
//{
//	assert(phead != NULL);
//	DCListNode* s = _Buynode(x);
//	DCListNode* head = *phead;
//	assert(s != NULL);
//
//	//链接结点
//	s->next = head->next;
//	s->prev = head;
//	s->prev->next = s;      // head->next->prev = s;
//	s->next->prev = s;      // head->next = s;
//}
//
//size_t DCListLength(DCList phead)
//{
//	assert(phead != NULL);
//	size_t size = 0;
//	DCListNode* p = (phead)->next;
//	while (p != phead)
//	{
//		size++;
//		p = p->next;
//	}
//	return size;
//}
//
//void DCListPopBack(DCList* phead)
//{
//	assert(phead != NULL);
//	DCListNode* head = *phead;
//
//	DCListNode* p = head->prev;
//	//if (head->next == head)
//	//{
//	//	return;
//	//}
//	//p->prev->next = head;
//	//head->prev = p->prev;
//	//free(p);
//
//	if (p != head->next)
//	{
//		head->prev = head->prev->prev;
//		head->prev->next = head;
//		free(p);
//	}
//	else
//	{
//		return;
//	}
//}
//
//void DCListPopFront(DCList* phead)
//{
//	assert(phead != NULL);
//	DCListNode* head = *phead;
//	if (head->next == head)
//	{
//		return;
//	}
//
//	DCListNode* p = head->next;
//	p->next->prev = p->prev;
//	p->prev->next = p->next;
//	free(p);
//}
//
//DCListNode* DCListFind(DCList phead, ElemType key)
//{
//	assert(phead != NULL);
//	DCListNode* p = phead->next;
//
//	while (p != phead && key != p->data)
//	{
//		p = p->next;
//	}
//	if (p == phead)
//	{
//		p = NULL;
//	}
//	return p;
//}
//
//void DCListEraseByVal(DCList *phead, ElemType del)
//{
//	assert(phead != NULL);
//	DCListNode* p = DCListFind(*phead, del);
//	if (p == NULL)
//	{
//		printf("删除失败......\n");
//		return;
//	}
//	
//	if (p->next == *phead)//删除末尾结点
//	{
//		DCListPopBack(phead);
//		printf("删除成功......\n");
//	}
//	else if(p->next != *phead)
//	{
//		DCListNode* q = p->next;
//		p->data = q->data;
//		p->next = q->next;
//		p->prev = q->prev;
//		free(q);
//		printf("删除成功......\n");
//	}
//
////	////code2
////	//assert(phead != NULL);
////	//SListNode* p = SListFind(*phead, del);
////	//if (p == NULL)
////	//{
////	//	printf("删除失败......\n");
////	//	return;
////	//}
////
////	//SListNode* prev = *phead;
////	//while (prev != p && prev->next != p)
////	//{
////	//	prev = prev->next;
////	//}
////	//if (prev == p)
////	//{
////	//	*phead = p->next;
////	//}
////	//else
////	//{
////	//	prev->next = p->next;
////	//}
////	//free(p);
//}
//
//void DCListSortAsc(DCList phead)
//{
//	assert(phead != NULL);
//	if (DCListLength(phead) == 1)
//	{
//		return;
//	}
//	DCListNode* p = phead->next;
//	DCListNode* q = p->next;
//	p->next = phead;
//	phead->prev = p;
//	while (q != phead)
//	{
//		p = q;
//		q = q->next;
//
//		DCListNode* temp = phead->next;
//		while (temp != phead && p->data > temp->data)
//		{
//			temp = temp->next;
//		}
//		p->next = temp;
//		p->prev = temp->prev;
//		p->next->prev = p;
//		p->prev->next = p;
//	}
//}
//
//void DCListInsertByVal(DCList phead, ElemType key)
//{
//	assert(phead != NULL);
//	DCListNode* p = phead->next;
//	while (p != phead && key > p->data)
//	{
//		p = p->next;
//	}
//	DCListNode* s = _Buynode(key);
//	s->next = p;
//	s->prev = p->prev;
//	s->prev->next = s;
//	s->next->prev = s;
//}
//
//ElemType DCListFront(DCList phead)
//{
//	assert(phead != NULL);
//	assert(phead->next != phead);
//	return phead->next->data;
//}
//ElemType DCListBack(DCList phead)
//{
//	assert(phead != NULL);
//	assert(phead->next != phead);
//	return phead->prev->data;
//}
//
////删除单链表中所有指定元素
//void DCListEraseAll(DCList phead, ElemType x) //*phead -> SListNode*
//{
//	assert(phead != NULL);
//	DCListNode* p;
//	DCListNode* r;
//	p = phead;
//
//	while (p->next)
//	{
//		if (p->next->data == x)
//		{
//			r = p->next;
//			p->next = p->next->next;
//			delete r;
//		}
//		else
//		{
//			p = p->next;
//		}
//	}
//}
//
//void DCListClear(DCList *phead)
//{
//	assert(phead != NULL);
//	DCListNode* head = *phead;
//	if (head->next == head)
//	{
//		return;
//	}
//	DCListNode* p = head->next;
//	while (p != head)
//	{
//		p->prev->next = p->next;
//		p->next->prev = p->prev;
//		free(p);
//		p = head->next;//p的更新
//	}
//}
//
//void DCListDestroy(DCList* phead)//摧毁单链表
//{
//	DCListClear(phead);//清空
//	free(*phead);
//	*phead = NULL;//预防野指针
//}
//
//void DCListReverse(DCList phead)
//{
//	assert(phead != NULL);
//	if (DCListLength(phead) == 1)
//	{
//		return;
//	}
//
//	DCListNode* p = phead->next;
//	DCListNode* q = p->next;
//	p->next = phead;
//	phead->prev = p;
//
//	while (q != phead)
//	{
//		p = q;
//		q = q->next;
//
//		p->next = phead->next;
//		p->prev = phead;
//		p->next->prev = p;
//		p->prev->next = p;
//	}
//}
//
//
//
//
//
//
//int main()
//{
//	DCList list;
//	DCListInit(&list);
//
//	DCListNode* p = NULL;
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
//				DCListPushBack(&list, item);
//			}
//			printf("尾部插入成功......\n");
//			break;
//
//		case 2:
//			printf("头部插入......\n");
//			printf("请输入要插入的数据<-1结束>:");
//			while ((void)scanf("%d", &item),item != -1)
//			{
//				DCListPushFront(&list, item);
//			}
//			printf("头部插入成功......\n");
//			break;
//
//		case 3:
//			printf("打印双链表......\n");
//			DCListShow(list);
//			printf("打印双链表完成......\n");
//			break;
//
//		case 4:
//			printf("尾删......\n");
//			DCListPopBack(&list);
//			printf("尾部删除完成......\n");
//			break;
//
//		case 5:
//			printf("头删......\n");
//			DCListPopFront(&list);
//			printf("头部删除完成......\n");
//			break;
//
//		case 6:
//			printf("双链表长度......\n");
//			printf("Length = %d\n", DCListLength(list));
//			printf("长度打印完成\n");
//			break;
//
//		case 7:
//			printf("查找......\n");
//			printf("请输入要查找的值：>");
//			(void)scanf("%d", &item);
//			p = DCListFind(list, item);
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
//			DCListEraseByVal(&list, item);
//			break;
//
//		case 9:
//			printf("升序排序......\n");
//			DCListSortAsc(list);
//			printf("排序完成......\n");
//			break;
//
//
//		case 10:
//			printf("按值插入......\n");
//			printf("请输入要插入的值：>");
//			(void)scanf("%d", &item);
//			DCListSortAsc(list);
//			DCListInsertByVal(list, item);
//			printf("按值插入完成......\n");
//			break;
//
//		case 11:
//			printf("链表头元素 = %d\n", DCListFront(list));
//			printf("头部元素打印完成......\n");
//			break;
//
//		case 12:
//			printf("链表尾元素 = %d\n", DCListBack(list));
//			printf("尾部元素打印完成......\n");
//			break;
//
//		case 13:
//			printf("请输入要删除的元素：>");
//			(void)scanf("%d", &item);
//			DCListEraseAll(list, item);
//			printf("删除完成......\n");
//			break;
//
//		case 14:
//			printf("清空链表......\n");
//			DCListClear(&list);
//			printf("清空完成......\n");
//			break;
//
//		case 15:
//			printf("转置单链表......\n");
//			DCListReverse(list);
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
//	DCListDestroy(&list);
//	printf("双链表摧毁成功\n");
//	return EXIT_SUCCESS;
//}