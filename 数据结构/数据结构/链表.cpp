//#include "DS.h"
////1->2->3->4->5->6->7->8->9->10
////单链表
//
//typedef struct ListNode
//{
//	int data;          //数据域
//	ListNode *next;   //指针域
//}ListNode;
//
//typedef ListNode* List;
//
//void ListInit(List* phead)
//{
//	*phead = NULL;
//}
//
//void ListCreate(List* phead)
//{
//	assert(phead != NULL);
//	*phead = (ListNode*)malloc(sizeof(ListNode));
//	assert(*phead != NULL);
//	(*phead)->data = 1;
//	(*phead)->next = NULL;
//
//	ListNode* p = *phead;
//	for (int i = 2; i <= 10; i++)
//	{
//		//ListNode* s = (ListNode*)malloc(sizeof(ListNode));
//		//assert(s != NULL);
//		//s->data = i;
//		//s->next = NULL;
//
//		//p->next = s;
//		//p = s;
//
//		p = p->next = (ListNode*)malloc(sizeof(ListNode));
//		assert(p != NULL);
//		p->data = i;
//		p->next = NULL;
//
//	}
//}
//
//void ListCreate_Head(List* phead)
//{
//	assert(phead != NULL);
//	*phead = (ListNode*)malloc(sizeof(ListNode));
//	assert(*phead != NULL);
//	(*phead)->data = 1;
//	(*phead)->next = NULL;
//	List p = *phead;
//
//	for (int i = 2; i <= 10; i++)
//	{
//		List s = (ListNode*)malloc(sizeof(ListNode));
//		assert(s != NULL);
//		s->data = i;
//
//		s->next = *phead;
//		*phead = s;
//	}
//}
//
//void ListShow(List head)
//{
//	//ListNode* p = head;
//	List p = head;
//	while (p != NULL)
//	{
//		printf("%d->", p->data);
//		p = p->next;
//	}
//	printf("单链表打印完成\n");
//}
//int main()
//{
//	List mylist;//ListNode *mylist
//	ListInit(&mylist);
//	ListCreate(&mylist);//尾插
////	ListCreate_Head(&mylist);//头插
//	ListShow(mylist);
//	return EXIT_SUCCESS;
//}