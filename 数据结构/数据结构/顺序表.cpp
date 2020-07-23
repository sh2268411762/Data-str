//
//#include "DS.h"
//#pragma warning(disable:4996)
//#define N 8
//#define ElemType int
//typedef struct SeqList
//{
//	ElemType* base;    //指向动态开辟的数组
//	size_t size;         //有效数据个数
//	size_t capicity;     //容量空间的大小
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
//void SeqListInit(SeqList* plist)//初始化
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
//void SeqListPushBack(SeqList* plist, ElemType x)//头部插入
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !_Inc(plist,plist->capicity * 2))
//	{
//		printf("顺序表已满，%d不能头部插入\n", x);
//		return;
//	}
//	plist->base[plist->size++] = x;
//}
//
//void SeqListPushFront(SeqList* plist, ElemType x)//尾部插入
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !_Inc(plist, plist->capicity * 2))
//	{
//		printf("顺序表已满，%d不能尾部插入\n", x);
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
//void SeqListPopBack(SeqList* plist)//尾部删除
//{
//	assert(plist != NULL);
//	//判空
//	if (IsEmpty(plist))
//	{
//		printf("顺序表已空,不能尾部删除.\n");
//		return;
//	}
//	plist->size--;
//}
//
//void SeqListClear(SeqList* plist)//清空顺序表
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
//		printf("顺序表已满,%d 不能在 %d 位置插入...\n", x, pos);
//		return false;
//	}
//	if (pos < 0 || pos > plist->size)
//	{
//		printf("要插入的位置[%d]是非法位置, %d 不能插入...\n", pos, x);
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
//void SeqListPopFront(SeqList* plist)//头删
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))
//	{
//		printf("顺序表已为空，不能删除\n");
//		return;
//	}
//	//顺序表不为空
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		plist->base[i] = plist->base[i + 1];
//	}
//	plist->size--;
//}
//
//void SeqListEraseByPos(SeqList *plist, size_t pos)//删除
//{
//	assert(plist != NULL);
//	if (IsEmpty(plist))//判空
//	{
//		printf("顺序表已空，无法在[%d]位置进行删除操作\n", pos);
//		return;
//	}
//	if (pos < 0 && pos >= plist->size)
//	{
//		printf("位置非法，无法进行按位置删除操作\n");
//		return;
//	}
//	for (size_t i = pos; i < plist->size; i++)
//	{
//		plist->base[i] = plist->base[i + 1];
//	}
//	plist->size--;
//}
//
//void SeqListInsertByVal(SeqList* plist, ElemType x)//按值插入
//{
//	assert(plist != NULL);
//	if (IsFull(plist) && !_Inc(plist, plist->capicity * 2))
//	{
//		printf("顺序表已满，插入失败\n");
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
//int SeqListFind(SeqList* plist, ElemType key)//按值查找
//{
//	assert(plist != NULL);
//	int pos = 0;//位置
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
//	int pos = SeqListFind(plist, key);//返回要删除的值的位置
//	if (-1 == pos)
//	{
//		return;
//	}
//	
//	SeqListEraseByPos(plist, pos);//按位置删除
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
//		printf("顺序表为空，无法完成获取操作...\n");
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
//		printf("顺序表为空，无法完成获取操作...\n");
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
//void SeqListClear_Item(SeqList *plist, ElemType del)
//{
//	assert(plist != NULL);
//	for (size_t i = 0; i < plist->size; i++)
//	{
//		if (del == plist->base[i])
//		{
//			SeqListEraseByVal(plist, del);
//		}
//	}
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
//		printf("*  [1] push_back(尾插）                [2] push_front（头插）             *\n");
//		printf("*  [3] show_list（打印）               [0] quit_system（退出）            *\n");
//		printf("*  [4] pop_back（尾删）                [5] pop_front（头删）              *\n");
//		printf("*  [6] insert_pos（插入位置）          [7] insert_val（插入元素）         *\n");
//		printf("*  [8] erase_pos（删除位置）           [9] erase_val（删除元素）          *\n");
//		printf("*  [10] find（查找）                   [11] length（长度）                *\n");
//		printf("*  [12] capacity（容量）               [13] sort（排序）                  *\n");
//		printf("*  [14] reverse（逆置）                [15] clear（清空）                 *\n");
//		printf("*  [16] front（头部元素）              [17] back（尾部元素）              *\n");
//		printf("*  [18] binary（二分查找）             [19] erase_all（删除表中某一元素   *\n");
//		printf("***************************************************************************\n");
//		printf("请选择");
//		scanf("%d", &select);
//		if (select == 0)
//		{
//			break;
//		}
//		switch (select)
//		{
//		case 1:
//			printf("请输入要插入的数据<以-1结束>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				SeqListPushBack(&list, item);
//			}
//			printf("头部插入数据成功......\n");
//			break;
//
//		case 2:
//			printf("请输入要插入的数据<以-1结束>:");
//			while (scanf("%d", &item), item != -1)
//			{
//				SeqListPushFront(&list, item);
//			}
//			printf("尾部插入数据成功......\n");
//			break;
//
//		case 3:
//			printf("打印顺序表...\n");
//			SeqListShow(&list);
//			printf("顺序表打印完成...\n");
//			break;
//
//		case 4:
//			printf("尾部删除...\n");
//			SeqListPopBack(&list);
//			printf("尾部删除完成...\n");
//			break;
//
//		case 5:
//			printf("头部删除...\n");
//			SeqListPopFront(&list);
//			printf("头部删除完成...\n");
//			break;
//
//		case 6://按位置插入元素
//			printf("请输入要插入的位置:>");
//			scanf("%d", &pos);
//			printf("请输入要插入的元素:>");
//			scanf("%d", &item);
//			flag = SeqListInsertByPos(&list, pos, item);
//			if (flag)
//			{
//				printf("插入数据成功.......\n");
//			}
//			else
//			{
//				printf("插入数据失败.......\n");
//			}
//			break;
//
//		case 7:
//			printf("按值插入（请输入要插入的值）：");
//			scanf("%d", &item);
//			SeqListSort(&list);//先进行排序
//			SeqListInsertByVal(&list,item);//在进行按值插入
//			printf("插入完成...\n");
//			break;
//
//		case 8:
//			printf("按位置删除（请输入要删除的值的位置）：");
//			scanf("%d", &pos);
//			SeqListEraseByPos(&list, pos);
//			printf("按位置删除完成...\n");
//			break;
//
//		case 9:
//			printf("按值删除（请输入要删除的值）：");
//			scanf("%d", &item);
//			SeqListEraseByVal(&list, item);
//			printf("按值删除完成...\n");
//			break;
//
//		case 10:
//			printf("请输入要查找的值：");
//			scanf("%d", &item);
//			pos = SeqListFind(&list, item);
//			if (-1 == pos)
//			{
//				printf("数据查找失败...\n");
//			}
//			else
//			{
//				printf("数据查找成功...\n");
//			}
//			break;
//
//		case 11:
//			printf("计算顺序表长度...\n");
//			printf("长度 = %d\n", Length(&list));
//			printf("长度打印完成...\n");
//			break;
//
//		case 12:
//			printf("计算顺序表容量...\n");
//			printf("容量 = %d\n", SeqListCapicity(&list));
//			printf("容量打印完成...\n");
//			break;
//
//		case 13:
//			printf("顺序表排序...");
//			SeqListSort(&list);
//			printf("顺序表排序成功...\n");
//			break;
//
//		case 14:
//			printf("转置顺序表...\n");
//			SeqListReverse(&list);
//			printf("转置完成...\n");
//			break;
//
//		case 15:
//			printf("清空顺序表...\n");
//			SeqListClear(&list);
//			printf("清空顺序表完成...\n");
//			break;
//
//		case 16:
//			printf("获取顺序表头部元素...\n");
//			printf("头部元素为 [%d]\n", SeqListGetFront(&list));
//			printf("获取完成...\n");
//			break;
//
//		case 17:
//			printf("获取顺序表尾部元素...\n");
//			printf("尾部元素为 [%d]\n", SeqListGetBack(&list));
//			printf("获取完成...\n");
//			break;
//
//		case 18:
//			printf("二分查找...\n请输入要查找的值：");
//			scanf("%d", &item);
//			SeqListSort(&list);//先进行排序
//			pos = SeqListBinary(&list,item);
//			if (pos == -1)
//			{
//				printf("没有[%d]元素\n", item);
//			}
//			else
//			{
//				printf("[%d]元素的下标为[%d]\n", item, pos);
//			}
//			printf("查找完成...\n");
//			break;
//
//		case 19:
//			printf("清空顺序表某元素...\n请输入要删除的元素：");
//			scanf("%d", &item);
//			SeqListClear_Item(&list,item);
//			printf("清空完成...\n");
//			break;
//
//		default:
//			printf("命令出错,请重新输入......\n");
//			break;
//		}
//		system("pause");
//		system("cls");
//	}
//
//	printf("程序退出!!!\n欢迎下次再来!!!");
//	SeqListDestroy(&list);
//	return EXIT_SUCCESS;
//}