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
//	printf("** 1��β��(push_back)               2��ͷ��(push_front)       **\n");
//	printf("** 3����ӡ������(show_Slist)        4��βɾ(pop_back)         **\n");
//	printf("** 5��ͷɾ(pop_front)               6����������(length)     **\n");
//	printf("** 7������(find)                    8����ֵɾ��(erase_val)    **\n");
//	printf("** 9������(��)(sort)                0���˳�(exit)             **\n");
//	printf("** 10����ֵ����(insert_val)         11��ͷԪ��(front)         **\n");
//	printf("** 12��βԪ��(back)                 13��ɾ��(erase_all)       **\n");
//	printf("** 14�����(clear)                  15��ת��(reverse)         **\n");
//	printf("****************************************************************\n");
//	printf("��ѡ��>");
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
//void DCListInit(DCList *phead)//��ʼ��
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
//	//���ӽ��
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
//	printf("˫�����ӡ���.\n");
//}
//
//void DCListPushFront(DCList* phead, ElemType x)
//{
//	assert(phead != NULL);
//	DCListNode* s = _Buynode(x);
//	DCListNode* head = *phead;
//	assert(s != NULL);
//
//	//���ӽ��
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
//		printf("ɾ��ʧ��......\n");
//		return;
//	}
//	
//	if (p->next == *phead)//ɾ��ĩβ���
//	{
//		DCListPopBack(phead);
//		printf("ɾ���ɹ�......\n");
//	}
//	else if(p->next != *phead)
//	{
//		DCListNode* q = p->next;
//		p->data = q->data;
//		p->next = q->next;
//		p->prev = q->prev;
//		free(q);
//		printf("ɾ���ɹ�......\n");
//	}
//
////	////code2
////	//assert(phead != NULL);
////	//SListNode* p = SListFind(*phead, del);
////	//if (p == NULL)
////	//{
////	//	printf("ɾ��ʧ��......\n");
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
////ɾ��������������ָ��Ԫ��
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
//		p = head->next;//p�ĸ���
//	}
//}
//
//void DCListDestroy(DCList* phead)//�ݻٵ�����
//{
//	DCListClear(phead);//���
//	free(*phead);
//	*phead = NULL;//Ԥ��Ұָ��
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
//			printf("β������......\n");
//			printf("������Ҫ���������<-1����>:");
//			while ((void)scanf("%d", &item),item != -1)
//			{
//				DCListPushBack(&list, item);
//			}
//			printf("β������ɹ�......\n");
//			break;
//
//		case 2:
//			printf("ͷ������......\n");
//			printf("������Ҫ���������<-1����>:");
//			while ((void)scanf("%d", &item),item != -1)
//			{
//				DCListPushFront(&list, item);
//			}
//			printf("ͷ������ɹ�......\n");
//			break;
//
//		case 3:
//			printf("��ӡ˫����......\n");
//			DCListShow(list);
//			printf("��ӡ˫�������......\n");
//			break;
//
//		case 4:
//			printf("βɾ......\n");
//			DCListPopBack(&list);
//			printf("β��ɾ�����......\n");
//			break;
//
//		case 5:
//			printf("ͷɾ......\n");
//			DCListPopFront(&list);
//			printf("ͷ��ɾ�����......\n");
//			break;
//
//		case 6:
//			printf("˫������......\n");
//			printf("Length = %d\n", DCListLength(list));
//			printf("���ȴ�ӡ���\n");
//			break;
//
//		case 7:
//			printf("����......\n");
//			printf("������Ҫ���ҵ�ֵ��>");
//			(void)scanf("%d", &item);
//			p = DCListFind(list, item);
//			if (p == NULL)
//			{
//				printf("���ݲ���ʧ��\n");
//			}
//			else
//			{
//				printf("���ݲ��ҳɹ�\n");
//			}
//			break;
//
//		case 8:
//			printf("��ֵɾ��......\n������Ҫɾ����ֵ��>");
//			(void)scanf("%d", &item);
//			DCListEraseByVal(&list, item);
//			break;
//
//		case 9:
//			printf("��������......\n");
//			DCListSortAsc(list);
//			printf("�������......\n");
//			break;
//
//
//		case 10:
//			printf("��ֵ����......\n");
//			printf("������Ҫ�����ֵ��>");
//			(void)scanf("%d", &item);
//			DCListSortAsc(list);
//			DCListInsertByVal(list, item);
//			printf("��ֵ�������......\n");
//			break;
//
//		case 11:
//			printf("����ͷԪ�� = %d\n", DCListFront(list));
//			printf("ͷ��Ԫ�ش�ӡ���......\n");
//			break;
//
//		case 12:
//			printf("����βԪ�� = %d\n", DCListBack(list));
//			printf("β��Ԫ�ش�ӡ���......\n");
//			break;
//
//		case 13:
//			printf("������Ҫɾ����Ԫ�أ�>");
//			(void)scanf("%d", &item);
//			DCListEraseAll(list, item);
//			printf("ɾ�����......\n");
//			break;
//
//		case 14:
//			printf("�������......\n");
//			DCListClear(&list);
//			printf("������......\n");
//			break;
//
//		case 15:
//			printf("ת�õ�����......\n");
//			DCListReverse(list);
//			printf("ת�����......\n");
//			break;
//
//		case 0:
//			printf("�˳�������");
//			break;
//
//		default:
//			printf("�����������������룡����");
//			break;
//		}
//		printf("\n");
//		Menu();
//		(void)scanf("%d", &select);
//	} while (select);
//
//	printf("������ݻٿ�ʼ......\n");
//	for (int i = 10; i >= 0; i--)
//	{
//		printf("%d......\n", i);
//		Sleep(1000);
//	}
//	DCListDestroy(&list);
//	printf("˫����ݻٳɹ�\n");
//	return EXIT_SUCCESS;
//}