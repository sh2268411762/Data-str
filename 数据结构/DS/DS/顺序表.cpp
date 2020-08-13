//
//#include "DS.h"
//#pragma warning(disable:4996)
//#define N 8
//#define ElemType int
//typedef struct SeqList
//{
//	ElemType* base;    //ָ��̬���ٵ�����
//	size_t size;         //��Ч���ݸ���
//	size_t capicity;     //�����ռ�Ĵ�С
//}SeqList;
//
//void Swap(ElemType* x, ElemType* y)
//{
//	ElemType z = *x;
//	*x = *y;
//	*y = z;
//}
//
//bool IsFull(SeqList* plist)
//{
//	assert(plist != NULL);
//	return plist->size >= plist->capicity;
//}
//
//bool IsEmpty(SeqList* plist)
//{
//	assert(plist != NULL);
//	return plist->size == 0;
//}
//
//void SeqListInit(SeqList* plist)//��ʼ��
//{
//	assert(plist != NULL);
//	plist->capicity = N;
//	plist->base = (ElemType*)malloc(sizeof(ElemType) * plist->capicity);
//	plist->size = 0;
//}
//void SeqListDestroy(SeqList* plist)
//{
//	assert(plist != NULL);
//	free(plist->base);
//	plist->base = NULL;
//	plist->capicity = plist->size = 0;
//}
//
//bool _Inc(SeqList* plist, size_t new_capicity)
//{
//	////code1
//	//assert(plist != NULL && new_capicity > plist->capicity);
//	//ElemType* new_base = (ElemType*)realloc(plist->base, sizeof(ElemType) * new_capicity);
//	//if (new_base == NULL)
//	//{
//	//	return false;
//	//}
//	//plist->base = new_base;
//	//plist->capicity = new_capicity;
//	//return true;
//
//	//code2
//	assert(plist != NULL && new_capicity > plist->capicity);
//	ElemType* new_base = (ElemType*)realloc(plist->base, sizeof(ElemType) * new_capicity);
//	if (new_base == NULL)
//	{
//		return false;
//	}
//	memcpy(new_base, plist->base, sizeof(ElemType) * (plist->capicity));
//	free(plist->base);
//	plist->base = new_base;
//	plist->capicity = new_capicity;
//	return true;
//}
//
//void SeqListPushBack(SeqList* plist, ElemType x)//ͷ������
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !_Inc(plist,plist->capicity * 2))
//	{
//		printf("˳���������%d����ͷ������\n", x);
//		return;
//	}
//	plist->base[plist->size++] = x;
//}
//
//void SeqListPushFront(SeqList* plist, ElemType x)//β������
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !_Inc(plist, plist->capicity * 2))
//	{
//		printf("˳���������%d����β������\n", x);
//		return;
//	}
//	for (size_t i = plist->size; i > 0; i--)
//	{
//		plist->base[i] = plist->base[i - 1];
//	}
//	plist->base[0] = x;
//	plist->size++;
//}
//
//void SeqListShow(SeqList* plist)
//{
//	assert(plist != NULL);
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		printf("%d  ", plist->base[i]);
//	}
//	printf("\n");
//}
//
//void SeqListPopBack(SeqList* plist)//β��ɾ��
//{
//	assert(plist != NULL);
//	//�п�
//	if (IsEmpty(plist))
//	{
//		printf("˳����ѿ�,����β��ɾ��.\n");
//		return;
//	}
//	plist->size--;
//}
//
//void SeqListClear(SeqList* plist)//���˳���
//{
//	assert(plist != NULL);
//	plist->size = 0;
//}
//
//bool SeqListInsertByPos(SeqList* plist, size_t pos, ElemType x)
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !_Inc(plist, plist->capicity * 2))
//	{
//		printf("˳�������,%d ������ %d λ�ò���...\n", x, pos);
//		return false;
//	}
//	if (pos < 0 || pos > plist->size)
//	{
//		printf("Ҫ�����λ��[%d]�ǷǷ�λ��, %d ���ܲ���...\n", pos, x);
//		return false;
//	}
//
//	for (size_t i = plist->size; i > pos; i--)
//	{
//		plist->base[i] = plist->base[i - 1];
//	}
//
//	plist->base[pos] = x;
//	plist->size++;
//
//	return true;
//}
//
//void SeqListSort(SeqList* plist)
//{
//	assert(plist != NULL);
//	for (size_t i = 0; i < plist->size - 1; i++)
//	{
//		for (size_t j = 0; j < plist->size - i - 1; j++)
//		{
//			if (plist->base[j] > plist->base[j + 1])
//				Swap(&plist->base[j], &plist->base[j + 1]);
//		}
//	}
//}
//
//size_t Length(SeqList* plist)
//{
//	assert(plist != NULL);
//	return plist->size;
//}
//
//
//
//size_t SeqListCapicity(SeqList *plist)
//{
//	assert(plist != NULL);
//	return plist->capicity;
//}
//
//void SeqListPopFront(SeqList* plist)//ͷɾ
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("˳�����Ϊ�գ�����ɾ��\n");
//		return;
//	}
//	//˳���Ϊ��
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		plist->base[i] = plist->base[i + 1];
//	}
//	plist->size--;
//}
//
//void SeqListEraseByPos(SeqList *plist, size_t pos)//ɾ��
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//�п�
//	{
//		printf("˳����ѿգ��޷���[%d]λ�ý���ɾ������\n", pos);
//		return;
//	}
//	if (pos < 0 && pos >= plist->size)
//	{
//		printf("λ�÷Ƿ����޷����а�λ��ɾ������\n");
//		return;
//	}
//	for (size_t i = pos; i < plist->size; i++)
//	{
//		plist->base[i] = plist->base[i + 1];
//	}
//	plist->size--;
//}
//
//void SeqListInsertByVal(SeqList* plist, ElemType x)//��ֵ����
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !_Inc(plist, plist->capicity * 2))
//	{
//		printf("˳�������������ʧ��\n");
//		return;
//	}
//
//	size_t end = plist->size - 1;
//	while (end >= 0 && x < plist->base[end])
//	{
//		plist->base[end + 1] = plist->base[end];
//		end--;
//	}
//	plist->base[end + 1] = x;
//	plist->size++;
//
//	//size_t pos = 0;
//	//while (pos < plist->size && x > plist->base[pos])
//	//{
//	//	pos++;
//	//}
//
//	//for (size_t i = plist->size; i > pos; i--)
//	//{
//	//	plist->base[i] = plist->base[i - 1];	
//	//}
//	//plist->base[pos] = x;
//	//plist->size++;
//}
//
//int SeqListFind(SeqList* plist, ElemType key)//��ֵ����
//{
//	assert(plist != NULL);
//	int pos = 0;//λ��
//	while (pos < plist->size && key != plist->base[pos])
//	{
//		pos++;
//	}
//	if (pos == plist->size)
//	{
//		return -1;
//	}
//	else
//	{
//		return pos;
//	}
//}
//
//void SeqListEraseByVal(SeqList *plist, ElemType key)
//{
//	assert(plist != NULL);
//	int pos = SeqListFind(plist, key);//����Ҫɾ����ֵ��λ��
//	if (-1 == pos)
//	{
//		return;
//	}
//	
//	SeqListEraseByPos(plist, pos);//��λ��ɾ��
//}
//
//void SeqListReverse(SeqList* plist)
//{
//	assert(plist != NULL);
//	if (plist->size == 1)
//	{
//		return;
//	}
//	int start = 0;
//	int end = plist->size - 1;
//	while (start < end)
//	{
//		Swap(&plist->base[start], &plist->base[end]);
//		end--;
//		start++;
//	}
//}
//
//size_t SeqListGetFront(SeqList *plist)
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("˳���Ϊ�գ��޷���ɻ�ȡ����...\n");
//		return -1;
//	}
//	return plist->base[0];
//}
//
//size_t SeqListGetBack(SeqList* plist)
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("˳���Ϊ�գ��޷���ɻ�ȡ����...\n");
//		return -1;
//	}
//	return plist->base[plist->size - 1];
//}
//
//size_t SeqListBinary(SeqList* plist, ElemType key)
//{
//	assert(plist != NULL);
//	size_t start = 0;
//	size_t end = plist->size - 1;
//	size_t mid;
//
//	while (start <= end)
//	{
//		mid = (start + end) / 2;
//		if (plist->base[mid] == key)
//		{
//			return mid;
//		}
//		else if (plist->base[mid] > key)
//		{
//			end = mid - 1;
//		}
//		else
//		{
//			start = mid + 1;
//		}
//	}
//	return -1;
//}
//void SeqListClear_Item(SeqList *plist, ElemType del)//ɾ������ָ��Ԫ��
//{
//	assert(plist != NULL);
//	//for (size_t i = 0; i < plist->size; i++)
//	//{
//	//	if (del == plist->base[i])
//	//	{
//	//		SeqListEraseByVal(plist, del);
//	//	}
//	//}
//
//	int count = 0;
//	for (int i = 0; i < plist->size; i++)
//	{
//		if (plist->base[i] != del)
//		{
//			plist->base[count] = plist->base[i];
//			count++;
//		}
//	}
//
//	plist->size = count;
//}
//
//
//
//int main()
//{
//	SeqList list;
//	SeqListInit(&list);
//
//	size_t pos;
//	bool flag;
//	ElemType item;
//	int select = 1;
//	while (select)
//	{
//		printf("***************************************************************************\n");
//		printf("*  [1] push_back(β�壩                [2] push_front��ͷ�壩             *\n");
//		printf("*  [3] show_list����ӡ��               [0] quit_system���˳���            *\n");
//		printf("*  [4] pop_back��βɾ��                [5] pop_front��ͷɾ��              *\n");
//		printf("*  [6] insert_pos������λ�ã�          [7] insert_val������Ԫ�أ�         *\n");
//		printf("*  [8] erase_pos��ɾ��λ�ã�           [9] erase_val��ɾ��Ԫ�أ�          *\n");
//		printf("*  [10] find�����ң�                   [11] length�����ȣ�                *\n");
//		printf("*  [12] capacity��������               [13] sort������                  *\n");
//		printf("*  [14] reverse�����ã�                [15] clear����գ�                 *\n");
//		printf("*  [16] front��ͷ��Ԫ�أ�              [17] back��β��Ԫ�أ�              *\n");
//		printf("*  [18] binary�����ֲ��ң�             [19] erase_all��ɾ������ĳһԪ��   *\n");
//		printf("***************************************************************************\n");
//		printf("��ѡ��");
//		(void)scanf("%d", &select);
//		if (select == 0)
//		{
//			break;
//		}
//		switch (select)
//		{
//		case 1:
//			printf("������Ҫ���������<��-1����>:");
//			while ((void)scanf("%d", &item), item != -1)
//			{
//				SeqListPushBack(&list, item);
//			}
//			printf("ͷ���������ݳɹ�......\n");
//			break;
//
//		case 2:
//			printf("������Ҫ���������<��-1����>:");
//			while ((void)scanf("%d", &item), item != -1)
//			{
//				SeqListPushFront(&list, item);
//			}
//			printf("β���������ݳɹ�......\n");
//			break;
//
//		case 3:
//			printf("��ӡ˳���...\n");
//			SeqListShow(&list);
//			printf("˳����ӡ���...\n");
//			break;
//
//		case 4:
//			printf("β��ɾ��...\n");
//			SeqListPopBack(&list);
//			printf("β��ɾ�����...\n");
//			break;
//
//		case 5:
//			printf("ͷ��ɾ��...\n");
//			SeqListPopFront(&list);
//			printf("ͷ��ɾ�����...\n");
//			break;
//
//		case 6://��λ�ò���Ԫ��
//			printf("������Ҫ�����λ��:>");
//			(void)scanf("%d", &pos);
//			printf("������Ҫ�����Ԫ��:>");
//			(void)scanf("%d", &item);
//			flag = SeqListInsertByPos(&list, pos, item);
//			if (flag)
//			{
//				printf("�������ݳɹ�.......\n");
//			}
//			else
//			{
//				printf("��������ʧ��.......\n");
//			}
//			break;
//
//		case 7:
//			printf("��ֵ���루������Ҫ�����ֵ����");
//			(void)scanf("%d", &item);
//			SeqListSort(&list);//�Ƚ�������
//			SeqListInsertByVal(&list,item);//�ڽ��а�ֵ����
//			printf("�������...\n");
//			break;
//
//		case 8:
//			printf("��λ��ɾ����������Ҫɾ����ֵ��λ�ã���");
//			(void)scanf("%d", &pos);
//			SeqListEraseByPos(&list, pos);
//			printf("��λ��ɾ�����...\n");
//			break;
//
//		case 9:
//			printf("��ֵɾ����������Ҫɾ����ֵ����");
//			(void)scanf("%d", &item);
//			SeqListEraseByVal(&list, item);
//			printf("��ֵɾ�����...\n");
//			break;
//
//		case 10:
//			printf("������Ҫ���ҵ�ֵ��");
//			(void)scanf("%d", &item);
//			pos = SeqListFind(&list, item);
//			if (-1 == pos)
//			{
//				printf("���ݲ���ʧ��...\n");
//			}
//			else
//			{
//				printf("���ݲ��ҳɹ�...\n");
//			}
//			break;
//
//		case 11:
//			printf("����˳�����...\n");
//			printf("���� = %d\n", Length(&list));
//			printf("���ȴ�ӡ���...\n");
//			break;
//
//		case 12:
//			printf("����˳�������...\n");
//			printf("���� = %d\n", SeqListCapicity(&list));
//			printf("������ӡ���...\n");
//			break;
//
//		case 13:
//			printf("˳�������...");
//			SeqListSort(&list);
//			printf("˳�������ɹ�...\n");
//			break;
//
//		case 14:
//			printf("ת��˳���...\n");
//			SeqListReverse(&list);
//			printf("ת�����...\n");
//			break;
//
//		case 15:
//			printf("���˳���...\n");
//			SeqListClear(&list);
//			printf("���˳������...\n");
//			break;
//
//		case 16:
//			printf("��ȡ˳���ͷ��Ԫ��...\n");
//			printf("ͷ��Ԫ��Ϊ [%d]\n", SeqListGetFront(&list));
//			printf("��ȡ���...\n");
//			break;
//
//		case 17:
//			printf("��ȡ˳���β��Ԫ��...\n");
//			printf("β��Ԫ��Ϊ [%d]\n", SeqListGetBack(&list));
//			printf("��ȡ���...\n");
//			break;
//
//		case 18:
//			printf("���ֲ���...\n������Ҫ���ҵ�ֵ��");
//			(void)scanf("%d", &item);
//			SeqListSort(&list);//�Ƚ�������
//			pos = SeqListBinary(&list,item);
//			if (pos == -1)
//			{
//				printf("û��[%d]Ԫ��\n", item);
//			}
//			else
//			{
//				printf("[%d]Ԫ�ص��±�Ϊ[%d]\n", item, pos);
//			}
//			printf("�������...\n");
//			break;
//
//		case 19:
//			printf("���˳���ĳԪ��...\n������Ҫɾ����Ԫ�أ�");
//			(void)scanf("%d", &item);
//			SeqListClear_Item(&list,item);
//			printf("������...\n");
//			break;
//
//		default:
//			printf("�������,����������......\n");
//			break;
//		}
//		system("pause");
//		system("cls");
//	}
//
//	printf("�����˳�!!!\n��ӭ�´�����!!!");
//	SeqListDestroy(&list);
//	return EXIT_SUCCESS;
//}