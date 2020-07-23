#include "DS.h"


typedef struct SListNode
{
	int data;          //数据域
	struct SListNode *next;   //指针域
}SListNode;

typedef SListNode* SList;
typedef int ElemType;

void Menu()
{
	printf("****************************************************************\n");
	printf("** 1、尾插(push_back)               2、头插(push_front)       **\n");
	printf("** 3、打印单链表(show_Slist)        4、尾删(pop_back)         **\n");
	printf("** 5、头删(pop_front)               6、单链表长度(length)     **\n");
	printf("** 7、查找(find)                    8、按值删除(erase_val)    **\n");
	printf("** 9、排序(升)(sort)                0、退出(exit)             **\n");
	printf("** 11、按值插入(insert_val)         12、头元素(front)         **\n");
	printf("** 13、尾元素(back)                 14、删除(erase_all)       **\n");
	printf("** 15、清除(clear)                  16、转置(reverse)         **\n");
	printf("****************************************************************\n");
	printf("请选择：>");
}

void SListInit(SList *phead)//初始化
{
	assert(phead != NULL);
	*phead = NULL;
}

void SListPushBack(SList* phead, ElemType x)
{
	assert(phead != NULL);
	SListNode* s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	//申请结点
	s->data = x;
	s->next = NULL;

	//链接结点
	SListNode* p = *phead;//指向第一个结点
	if (p == NULL)//插入的结点为第一个结点
	{
		*phead = s;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}//找到最后一个结点
		p->next = s;
	}
	
}

void SListShow(SList phead)
{
//	assert(phead != NULL);
	SListNode* p = phead;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("单链表打印完成.\n");
}

void SListPushFront(SList* phead, ElemType x)
{
	assert(phead != NULL);
	SListNode* s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	//申请结点
	s->data = x;

	//链接结点
	s->next = *phead;
	*phead = s;
}

size_t SListLength(SList phead)
{
//	assert(phead != NULL);
	size_t size = 0;
	SListNode* p = phead;
	while (p != NULL)
	{
		size++;
		p = p->next;
	}
	return size;
}

void SListPopBack(SList* phead)
{
	assert(phead != NULL);
	SListNode* p = *phead;
	SListNode* prev = NULL;//p的前驱

	if (p != NULL)
	{
		while (p->next != NULL)
		{
			prev = p;
			p = p->next;
		}

		if (prev == NULL)
		{
			*phead = NULL;
		}
		else
		{
			prev->next = NULL;
		}
		free(p);
	}
}

void SListPopFront(SList* phead)
{
	assert(phead != NULL);
	SListNode* p = *phead;
	if (p != NULL)
	{
		*phead = p->next;
		free(p);
	}
}

SListNode* SListFind(SList phead, ElemType key)
{
	SListNode* p = phead;
	while (p != NULL && p->data != key)
	{
		p = p->next;
	}
	return p;
}

void SListEraseByVal(SList *phead, ElemType del)
{
	assert(phead != NULL);
	SListNode* p = SListFind(*phead, del);
	if (p == NULL)
	{
		printf("删除失败......\n");
		return;
	}
	
	if (p->next == NULL)//删除末尾结点
	{
		SListPopBack(phead);
	}
	else
	{
		SListNode* q = p->next;
		p->data = q->data;
		p->next = q->next;
		free(q);
		printf("删除成功......\n");
	}

	////code2
	//assert(phead != NULL);
	//SListNode* p = SListFind(*phead, del);
	//if (p == NULL)
	//{
	//	printf("删除失败......\n");
	//	return;
	//}

	//SListNode* prev = *phead;
	//while (prev != p && prev->next != p)
	//{
	//	prev = prev->next;
	//}
	//if (prev == p)
	//{
	//	*phead = p->next;
	//}
	//else
	//{
	//	prev->next = p->next;
	//}
	//free(p);
}

void SListSortAsc(SList* phead)
{
	assert(phead != NULL);
	if (SListLength(*phead) <= 1)
	{
		return;
	}

	SListNode* temp = *phead, * prev = NULL;
	SListNode* p = *phead;
	SListNode *q = p->next;
	p->next = NULL;

	while (q != NULL)
	{
		p = q;
		q = q->next;
		//寻找插入位置
		while (temp != NULL && p->data > temp->data)
		{
			prev = temp;
			temp = temp->next;
		}
		if (prev == NULL)
		{
			p->next = *phead;
			*phead = p;
		}
		else
		{
			p->next = prev->next;
			prev->next = p;
		}
		temp = *phead;
		prev = NULL;
	}
}

void SListInsertByVal(SList* phead, ElemType key)
{
	assert(phead != NULL);
	SListNode* p = *phead, * prev = NULL;
	while (p != NULL && key > p->data)
	{
		prev = p;
		p = p->next;
	}

	SListNode* s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	s->data = key;
	if (prev == NULL)
	{
		s->next = *phead;
		*phead = s;
	}
	else
	{
		s->next = prev->next;
		prev->next = s;
	}
}

ElemType SListFront(SList phead)
{
	assert(phead != NULL);
	return phead->data;
}
ElemType SListBack(SList phead)
{
	assert(phead != NULL);
	SList p = phead;
	while (p->next != NULL)
	{
		p = p->next;
	}
	return p->data;
}

void SListEraseAll(SList* phead, ElemType x) 
{
	//
}

void SListClear(SList *phead)
{
	assert(phead != NULL);
	SListNode* p = *phead;
	while (*phead != NULL)
	{
		p = *phead;
		*phead = p->next;
		free(p);
	}
}

void SListDestroy(SList* phead)//摧毁单链表
{
	SListClear(phead);
}

void SListReverse(SList *phead)
{
	assert(phead != NULL);
	SListNode* p = *phead;
	SListNode* q = p->next;

	p->next = NULL;
	while (q != NULL)
	{
		p = q;
		q = q->next;
		p->next = *phead;
		*phead = p;
	}
}






int main()
{
	SList list;
	SListInit(&list);

	SListNode* p = NULL;
	ElemType item;
	int select = 0;
	Menu();
	(void)scanf("%d", &select);
	do
	{
		switch (select)
		{
		case 1:
			printf("尾部插入......\n");
			printf("请输入要插入的数据<-1结束>:");
			while ((void)scanf("%d", &item),item != -1)
			{
				SListPushBack(&list, item);
			}
			printf("尾部插入成功......\n");
			break;

		case 2:
			printf("头部插入......\n");
			printf("请输入要插入的数据<-1结束>:");
			while ((void)scanf("%d", &item),item != -1)
			{
				SListPushFront(&list, item);
			}
			printf("头部插入成功......\n");
			break;

		case 3:
			printf("打印单链表......\n");
			SListShow(list);
			printf("打印单链表完成......\n");
			break;

		case 4:
			printf("尾删......\n");
			SListPopBack(&list);
			printf("尾部删除完成......\n");
			break;

		case 5:
			printf("头删......\n");
			SListPopFront(&list);
			printf("头部删除完成......\n");
			break;

		case 6:
			printf("单链表长度......\n");
			printf("Length = %d\n", SListLength(list));
			printf("长度打印完成\n");
			break;

		case 7:
			printf("查找......\n");
			printf("请输入要查找的值：>");
			(void)scanf("%d", &item);
			p = SListFind(list, item);
			if (p == NULL)
			{
				printf("数据查找失败\n");
			}
			else
			{
				printf("数据查找成功\n");
			}
			break;

		case 8:
			printf("按值删除......\n请输入要删除的值：>");
			(void)scanf("%d", &item);
			SListEraseByVal(&list, item);
			break;

		case 9:
			printf("升序排序......\n");
			SListSortAsc(&list);
			printf("排序完成......\n");
			break;

		case 10:
			
			break;

		case 11:
			printf("按值插入......\n");
			printf("请输入要插入的值：>");
			(void)scanf("%d", &item);
			SListSortAsc(&list);
			SListInsertByVal(&list, item);
			printf("按值插入完成......\n");
			break;

		case 12:
			printf("链表头元素 = %d\n", SListFront(list));
			printf("头部元素打印完成......\n");
			break;

		case 13:
			printf("链表尾元素 = %d\n", SListBack(list));
			printf("尾部元素打印完成......\n");
			break;

		case 14:
			printf("请输入要删除的元素：>");
			(void)scanf("%d", &item);
			SListEraseAll(&list, item);
			printf("删除完成......\n");
			break;

		case 15:
			printf("清空链表......\n");
			SListClear(&list);
			printf("清空完成......\n");
			break;

		case 16:
			printf("转置单链表......\n");
			SListReverse(&list);
			printf("转置完成......\n");
			break;

		case 0:
			printf("退出！！！");
			break;

		default:
			printf("输入有误，请重新输入！！！");
			break;
		}
		printf("\n");
		Menu();
		(void)scanf("%d", &select);
	} while (select);

	printf("单链表摧毁开始......\n");
	for (int i = 10; i >= 0; i--)
	{
		printf("%d......\n", i);
		Sleep(1000);
	}
	SListDestroy(&list);
	printf("单链表摧毁成功\n");
	return EXIT_SUCCESS;
}