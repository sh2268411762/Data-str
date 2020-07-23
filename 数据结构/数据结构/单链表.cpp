#include "DS.h"


typedef struct SListNode
{
	int data;          //������
	struct SListNode *next;   //ָ����
}SListNode;

typedef SListNode* SList;
typedef int ElemType;

void Menu()
{
	printf("****************************************************************\n");
	printf("** 1��β��(push_back)               2��ͷ��(push_front)       **\n");
	printf("** 3����ӡ������(show_Slist)        4��βɾ(pop_back)         **\n");
	printf("** 5��ͷɾ(pop_front)               6����������(length)     **\n");
	printf("** 7������(find)                    8����ֵɾ��(erase_val)    **\n");
	printf("** 9������(��)(sort)                0���˳�(exit)             **\n");
	printf("** 11����ֵ����(insert_val)         12��ͷԪ��(front)         **\n");
	printf("** 13��βԪ��(back)                 14��ɾ��(erase_all)       **\n");
	printf("** 15�����(clear)                  16��ת��(reverse)         **\n");
	printf("****************************************************************\n");
	printf("��ѡ��>");
}

void SListInit(SList *phead)//��ʼ��
{
	assert(phead != NULL);
	*phead = NULL;
}

void SListPushBack(SList* phead, ElemType x)
{
	assert(phead != NULL);
	SListNode* s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	//������
	s->data = x;
	s->next = NULL;

	//���ӽ��
	SListNode* p = *phead;//ָ���һ�����
	if (p == NULL)//����Ľ��Ϊ��һ�����
	{
		*phead = s;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}//�ҵ����һ�����
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
	printf("�������ӡ���.\n");
}

void SListPushFront(SList* phead, ElemType x)
{
	assert(phead != NULL);
	SListNode* s = (SListNode*)malloc(sizeof(SListNode));
	assert(s != NULL);
	//������
	s->data = x;

	//���ӽ��
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
	SListNode* prev = NULL;//p��ǰ��

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
		printf("ɾ��ʧ��......\n");
		return;
	}
	
	if (p->next == NULL)//ɾ��ĩβ���
	{
		SListPopBack(phead);
	}
	else
	{
		SListNode* q = p->next;
		p->data = q->data;
		p->next = q->next;
		free(q);
		printf("ɾ���ɹ�......\n");
	}

	////code2
	//assert(phead != NULL);
	//SListNode* p = SListFind(*phead, del);
	//if (p == NULL)
	//{
	//	printf("ɾ��ʧ��......\n");
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
		//Ѱ�Ҳ���λ��
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

void SListDestroy(SList* phead)//�ݻٵ�����
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
			printf("β������......\n");
			printf("������Ҫ���������<-1����>:");
			while ((void)scanf("%d", &item),item != -1)
			{
				SListPushBack(&list, item);
			}
			printf("β������ɹ�......\n");
			break;

		case 2:
			printf("ͷ������......\n");
			printf("������Ҫ���������<-1����>:");
			while ((void)scanf("%d", &item),item != -1)
			{
				SListPushFront(&list, item);
			}
			printf("ͷ������ɹ�......\n");
			break;

		case 3:
			printf("��ӡ������......\n");
			SListShow(list);
			printf("��ӡ���������......\n");
			break;

		case 4:
			printf("βɾ......\n");
			SListPopBack(&list);
			printf("β��ɾ�����......\n");
			break;

		case 5:
			printf("ͷɾ......\n");
			SListPopFront(&list);
			printf("ͷ��ɾ�����......\n");
			break;

		case 6:
			printf("��������......\n");
			printf("Length = %d\n", SListLength(list));
			printf("���ȴ�ӡ���\n");
			break;

		case 7:
			printf("����......\n");
			printf("������Ҫ���ҵ�ֵ��>");
			(void)scanf("%d", &item);
			p = SListFind(list, item);
			if (p == NULL)
			{
				printf("���ݲ���ʧ��\n");
			}
			else
			{
				printf("���ݲ��ҳɹ�\n");
			}
			break;

		case 8:
			printf("��ֵɾ��......\n������Ҫɾ����ֵ��>");
			(void)scanf("%d", &item);
			SListEraseByVal(&list, item);
			break;

		case 9:
			printf("��������......\n");
			SListSortAsc(&list);
			printf("�������......\n");
			break;

		case 10:
			
			break;

		case 11:
			printf("��ֵ����......\n");
			printf("������Ҫ�����ֵ��>");
			(void)scanf("%d", &item);
			SListSortAsc(&list);
			SListInsertByVal(&list, item);
			printf("��ֵ�������......\n");
			break;

		case 12:
			printf("����ͷԪ�� = %d\n", SListFront(list));
			printf("ͷ��Ԫ�ش�ӡ���......\n");
			break;

		case 13:
			printf("����βԪ�� = %d\n", SListBack(list));
			printf("β��Ԫ�ش�ӡ���......\n");
			break;

		case 14:
			printf("������Ҫɾ����Ԫ�أ�>");
			(void)scanf("%d", &item);
			SListEraseAll(&list, item);
			printf("ɾ�����......\n");
			break;

		case 15:
			printf("�������......\n");
			SListClear(&list);
			printf("������......\n");
			break;

		case 16:
			printf("ת�õ�����......\n");
			SListReverse(&list);
			printf("ת�����......\n");
			break;

		case 0:
			printf("�˳�������");
			break;

		default:
			printf("�����������������룡����");
			break;
		}
		printf("\n");
		Menu();
		(void)scanf("%d", &select);
	} while (select);

	printf("������ݻٿ�ʼ......\n");
	for (int i = 10; i >= 0; i--)
	{
		printf("%d......\n", i);
		Sleep(1000);
	}
	SListDestroy(&list);
	printf("������ݻٳɹ�\n");
	return EXIT_SUCCESS;
}