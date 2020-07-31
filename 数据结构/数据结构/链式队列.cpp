//#include "DS.h"
////queue
////链式队列
//
//typedef struct LinkQueueNode
//{
//	ElemType data;
//	struct LinkQueueNode* link;
//}LinkQueueNode;
//typedef struct LinkQueue
//{
//	LinkQueueNode* head; // 队头指针
//	LinkQueueNode* tail; // 队尾指针
//}LinkQueue;
////////////////////////////////////////////////////
//void LinkQueueInit(LinkQueue* pq);
//void LinkQueueEn(LinkQueue* pq, ElemType x);
//void LinkQueueDe(LinkQueue* pq);
//ElemType LinkQueueFront(LinkQueue* pq);
//int  LinkQueueSize(LinkQueue* pq);
//bool LinkQueueEmpty(LinkQueue* pq);
//void LinkQueueShow(LinkQueue* pq);
//void LinkQueueDestroy(LinkQueue* pq);
////////////////////////////////////////////////////
//int main()
//{
//	LinkQueue Q;
//	LinkQueueInit(&Q);
//
//	LinkQueueEn(&Q, 1);
//	LinkQueueEn(&Q, 2);
//	LinkQueueEn(&Q, 3);
//	LinkQueueEn(&Q, 4);
//	LinkQueueEn(&Q, 5);
//	LinkQueueShow(&Q);
//
//	int front_val;
//	while (!LinkQueueEmpty(&Q))
//	{
//		front_val = LinkQueueFront(&Q);
//		LinkQueueDe(&Q);
//		printf("[%d]出队.\n", front_val);
//	}
//	LinkQueueDestroy(&Q);
//	return EXIT_SUCCESS;
//}
//////////////////////////////////////////////////////
//void LinkQueueInit(LinkQueue* pq)
//{
//	pq->head = pq->tail = NULL;
//}
//
//void LinkQueueEn(LinkQueue* pq, ElemType x)
//{
//	assert(pq != NULL);
//	LinkQueueNode* node = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
//	assert(node != NULL);
//	node->data = x;
//	node->link = NULL;
//	if (pq->head == NULL)
//	{
//		pq->head = pq->tail = node;
//	}
//	else
//	{
//		pq->tail->link = node;
//		pq->tail = node;
//	}
//}
//
//void LinkQueueDe(LinkQueue* pq)
//{
//	assert(pq != NULL);
//	if (pq->head != NULL)
//	{
//		LinkQueueNode* p = pq->head;
//		if (pq->head == pq->tail)
//		{
//			pq->head = pq->tail = NULL;;
//		}
//		else
//		{
//			pq->head = p->link;
//		}
//		free(p);
//	}
//}
//
//ElemType LinkQueueFront(LinkQueue* pq)
//{
//	assert(pq != NULL);
//	assert(pq->head != NULL);
//	return pq->head->data;//pq->tail->data
//}
//
//int LinkQueueSize(LinkQueue* pq)
//{
//	assert(pq != NULL);
//	int size = 0;
//	LinkQueueNode* p = pq->head;
//	while (p != NULL)
//	{
//		size++;//size=0
//		p = p->link;
//	}
//	return size;
//}
//
//bool LinkQueueEmpty(LinkQueue* pq)
//{
//	assert(pq != NULL);
//	return pq->head == NULL;
//}
//
//void LinkQueueShow(LinkQueue* pq)
//{
//	assert(pq != NULL);
//	LinkQueueNode* p = pq->head;
//	while (p != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->link;
//	}
//	puts(" ");
//}
//
//void LinkQueueDestroy(LinkQueue* pq)
//{
//	assert(pq != NULL);
//	LinkQueueNode* p = pq->head;
//	while (p != NULL)
//	{
//		pq->head = p->link;
//		free(p);
//		p = pq->head;
//	}
//}
