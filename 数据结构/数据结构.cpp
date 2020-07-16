#include "DS.h"

#define N 8
#define ElemType int
typedef struct SeqList
{
	ElemType* base;    //指向动态开辟的数组
	size_t size;         //有效数据个数
	size_t capicity;     //容量空间的大小
}SeqList;

void SeqListInit(SeqList* plist)//初始化
{
	assert(plist != NULL);
	plist->capicity = N;
	plist->base = (ElemType*)malloc((sizeof(ElemType)) * (plist->capicity));
	plist->size = 0;
}
void SeqListDestroy(SeqList* plist)
{
	assert(plist != NULL);
	free(plist->base);
	plist->base = NULL;
	plist->capicity = plist->size = 0;
}
size_t Length(SeqList* plist)
{
	return plist->size;
}
bool IsFull(SeqList* plist)
{
	assert(plist != NULL);
	return plist->size >= plist->capicity;
}
bool IsEmpty(SeqList* plist)
{
	assert(plist != NULL);
	return plist->size == 0;
}

void SeqListPushBack(SeqList* plist, ElemType x)
{
	assert(plist != NULL);
	if (IsFull(plist))
	{
		printf("顺序表已满，%d不能头部插入\n", x);
		return;
	}
	plist->base[plist->size++] = x;
}

void SeqListPushFront(SeqList* plist, ElemType x)
{
	assert(plist != NULL);
	if (IsFull(plist))
	{
		printf("顺序表已满，%d不能插入\n", x);
		return;
	}
	for (size_t i = plist->size; i > 0; i--)
	{
		plist->base[i] = plist->base[i - 1];
	}
	plist->base[0] = x;
	plist->size++;
}

void SeqListShow(SeqList* plist)
{
	assert(plist != NULL);
	for (size_t i = 0; i < plist->capicity; i++)
	{
		printf("%d  ", plist->base[i]);
	}
	printf("\n");
}
void SeqListPopBack(SeqList* plist)//尾部删除
{
	assert(plist != NULL);
	//判空
	if (IsEmpty(plist))
	{
		printf("顺序表已空,不能尾部删除.\n");
		return;
	}
	plist->size--;
}
void SeqListClear(SeqList* plist)
{
	assert(plist != NULL);
	plist->size = 0;
}
bool SeqListInsertByPos(SeqList* plist, int pos, ElemType x)
{
	assert(plist != NULL);
	if (IsFull(plist))
	{
		printf("顺序表已满,%d 不能在 %d 位置插入.\n", x, pos);
		return false;
	}
	if (pos<0 || pos>plist->size)
	{
		printf("要插入的位置[%d]是非法位置, %d 不能插入.\n", pos, x);
		return false;
	}

	for (size_t i = plist->size; i > pos; --i)
		plist->base[i] = plist->base[i - 1];
	plist->base[pos] = x;
	plist->size++;

	return true;
}
void Swap(ElemType *x, ElemType *y)
{
	ElemType z = *x;
	*x = *y;
	*y = z;
}
void SeqListSort(SeqList* plist)
{
	assert(plist != NULL);
	for (size_t i = 0; i < plist->size - 1; ++i)
	{
		for (size_t j = 0; j < plist->size - i - 1; ++j)
		{
			if (plist->base[j] > plist->base[j + 1])
				Swap(&plist->base[j], &plist->base[j + 1]);
		}
	}
}
void SeqListPopFront(SeqList* plist)
{

}
bool SeqListInsertByVal(SeqList* plist, ElemType x)
{
	return true;
}



int main()
{
	SeqList list;
	SeqListInit(&list);

	int pos;
	bool flag;
	ElemType item;
	int select = 1;
	while (select)
	{
		printf("*********************************************\n");
		printf("*  [1] push_back           [2] push_front   *\n");
		printf("*  [3] show_list           [0] quit_system  *\n");
		printf("*  [4] pop_back            [5] pop_front    *\n");
		printf("*  [6] insert_pos          [7] insert_val   *\n");
		printf("*  [8] erase_pos           [9] erase_val    *\n");
		printf("*  [10] find               [11] length      *\n");
		printf("*  [12] capacity           [13] sort        *\n");
		printf("*  [14] reverse            [15] clear       *\n");
		printf("*********************************************\n");
		printf("请选择");
		scanf("%d", &select);
		if (select == 0)
		{
			break;
		}
		switch (select)
		{
		case 1:
			printf("请输入要插入的数据<以-1结束>:");
			while (scanf("%d", &item), item != -1)
			{
				SeqListPushBack(&list, item);
			}
			printf("头部插入数据成功......\n");
			break;
		case 2:
			printf("请输入要插入的数据<以-1结束>:");
			while (scanf("%d", &item), item != -1)
			{
				SeqListPushFront(&list, item);
			}
			printf("尾部插入数据成功......\n");
			break;
		case 3:
			SeqListShow(&list);
			break;
		case 4:
			SeqListPopBack(&list);
			break;
		case 6:
			printf("请输入要插入的位置:>");
			scanf("%d", &pos);
			printf("请输入要插入的元素:>");
			scanf("%d", &item);
			flag = SeqListInsertByPos(&list, pos, item);
			if (flag)
				printf("插入数据成功.......\n");
			else
				printf("插入数据失败.......\n");
			break;
		case 11:
			printf("SeqList Length = %d\n", Length(&list));
			break;
		case 13:
			SeqListSort(&list);
			printf("顺序表排序成功......\n");
			break;
		case 15:
			SeqListClear(&list);
			break;
		default:
			printf("命令出错,请重新输入......\n");
			break;
		}
		//system("pause");
		//system("cls");
	}


	SeqListDestroy(&list);
	return EXIT_SUCCESS;
}