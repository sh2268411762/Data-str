//#include "DS.h"
//
//
//typedef struct SCListNode
//{
//	int data;          //������
//	struct SCListNode *next;   //ָ����
//}SCListNode;
//
//typedef SCListNode* SCList;
//
//void Menu()
//{
//	printf("****************************************************************\n");
//	printf("** 1��β��(push_back)               2��ͷ��(push_front)       **\n");
//	printf("** 3����ӡ������(show_Slist)        4��βɾ(pop_back)         **\n");
//	printf("** 5��ͷɾ(pop_front)               6����������(length)     **\n");
//	printf("** 7������(find)                    8����ֵɾ��(erase_val)    **\n");
//	printf("** 9������(��)(sort)                0���˳�(exit)             **\n");
//	printf("** 11����ֵ����(insert_val)         12��ͷԪ��(front)         **\n");
//	printf("** 13��βԪ��(back)                 14��ɾ��(erase_all)       **\n");
//	printf("** 15�����(clear)                  16��ת��(reverse)         **\n");
//	printf("****************************************************************\n");
//	printf("��ѡ��>");
//}
//
//void SCListInit(SCList *phead)//��ʼ��
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
//	//������
//	s->data = x;
//
//	//���ӽ��
//	SCListNode* p = *phead;//ָ���һ�����
//	if (p == NULL)//����Ľ��Ϊ��һ�����
//	{
//		*phead = s;
//	}
//	else
//	{
//		while (p->next != *phead)
//		{
//			p = p->next;
//		}//�ҵ����һ�����
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
//		printf("%d->", p->data);//�������һ��Ԫ��
//		printf("�������ӡ���.\n");
//	}
//}
//
//void SCListPushFront(SCList* phead, ElemType x)
//{
//	assert(phead != NULL);
//	SCListNode* s = (SCListNode*)malloc(sizeof(SCListNode));
//	assert(s != NULL);
//	SCListNode* p = *phead;//ָ���һ�����
//	//������
//	s->data = x;
//
//	//���ӽ��
//	s->next = *phead;
//	while (p->next != *phead)
//	{
//		p = p->next;
//	}//�ҵ����һ�����
//	p->next = s;
//	*phead = s;
//}
//
//size_t SCListLength(SCList phead)//����
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
//void SCListPopBack(SCList* phead)//βɾ
//{
//	assert(phead != NULL);
//	SCListNode* p = *phead;
//	SCListNode* prev = NULL;//p��ǰ��
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
//void SCListPopFront(SCList* phead)//ͷɾ
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
//		}//�ҵ����һ�����
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
//		printf("ɾ��ʧ��......\n");
//		return;
//	}
//	
//	//����Ҫɾ���Ľ��
//	if (p->next == *phead)//ɾ��ĩβ���
//	{
//		SCListPopBack(phead);
//	}
//	else
//	{
//		SCListNode* q = p->next;
//		p->data = q->data;
//		p->next = q->next;
//		free(q);
//		printf("ɾ���ɹ�......\n");
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
//		//Ѱ�Ҳ���λ��
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
//void SCListDestroy(SCList* phead)//�ݻٵ�����
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
//			printf("β������......\n");
//			printf("������Ҫ���������<-1����>:");
//			while ((void)scanf("%d", &item),item != -1)
//			{
//				SCListPushBack(&list, item);
//			}
//			printf("β������ɹ�......\n");
//			break;
//
//		case 2:
//			printf("ͷ������......\n");
//			printf("������Ҫ���������<-1����>:");
//			while ((void)scanf("%d", &item),item != -1)
//			{
//				SCListPushFront(&list, item);
//			}
//			printf("ͷ������ɹ�......\n");
//			break;
//
//		case 3:
//			printf("��ӡ������......\n");
//			SCListShow(list);
//			printf("��ӡ���������......\n");
//			break;
//
//		case 4:
//			printf("βɾ......\n");
//			SCListPopBack(&list);
//			printf("β��ɾ�����......\n");
//			break;
//
//		case 5:
//			printf("ͷɾ......\n");
//			SCListPopFront(&list);
//			printf("ͷ��ɾ�����......\n");
//			break;
//
//		case 6:
//			printf("��������......\n");
//			printf("Length = %d\n", SCListLength(list));
//			printf("���ȴ�ӡ���\n");
//			break;
//
//		case 7:
//			printf("����......\n");
//			printf("������Ҫ���ҵ�ֵ��>");
//			(void)scanf("%d", &item);
//			p = SCListFind(list, item);
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
//			SCListEraseByVal(&list, item);
//			break;
//
//		case 9:
//			printf("��������......\n");
//			SCListSortAsc(&list);
//			printf("�������......\n");
//			break;
//
//		case 10:
//			
//			break;
//
//		case 11:
//			printf("��ֵ����......\n");
//			printf("������Ҫ�����ֵ��>");
//			(void)scanf("%d", &item);
////			SListSortAsc(&list);
////			SListInsertByVal(&list, item);
//			printf("��ֵ�������......\n");
//			break;
//
//		case 12:
//			printf("����ͷԪ�� = %d\n", SCListFront(list));
//			printf("ͷ��Ԫ�ش�ӡ���......\n");
//			break;
//
//		case 13:
//			printf("����βԪ�� = %d\n", SCListBack(list));
//			printf("β��Ԫ�ش�ӡ���......\n");
//			break;
//
//		case 14:
//			printf("������Ҫɾ����Ԫ�أ�>");
//			(void)scanf("%d", &item);
////			SListEraseAll(&list, item);
//			printf("ɾ�����......\n");
//			break;
//
//		case 15:
//			printf("�������......\n");
//			SCListClear(&list);
//			printf("������......\n");
//			break;
//
//		case 16:
//			printf("ת�õ�����......\n");
////			SListReverse(&list);
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
//	SCListDestroy(&list);
//	printf("������ݻٳɹ�\n");
//	return EXIT_SUCCESS;
//}