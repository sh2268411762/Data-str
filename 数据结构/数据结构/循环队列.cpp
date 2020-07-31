//#include "DS.h"
////顺序队列
//#define QUEUE_DEFAULT_SIZE 8
//typedef struct CycleSeqQueue
//{
//	ElemType *base;
//	int capacity;
//	int front;
//	int rear;
//}CycleSeqQueue;
//
//
//
//
//bool IsFull(CycleSeqQueue* pcq);
//bool IsEmpty(CycleSeqQueue* pcq);
//void CycleSeqQueueInit(CycleSeqQueue* pcq,int sz = QUEUE_DEFAULT_SIZE);
//void CycleSeqQueueEn(CycleSeqQueue* pcq, ElemType x);
//void CycleSeqQueueDe(CycleSeqQueue* pcq);
//ElemType CycleSeqQueueFront(CycleSeqQueue* pcq);
//int  CycleSeqQueueSize(CycleSeqQueue* pcq);
//bool CycleSeqQueueEmpty(CycleSeqQueue* pcq);
//void CycleSeqQueueShow(CycleSeqQueue* pcq);
//void CycleSeqQueueDestroy(CycleSeqQueue* pcq);
//
////////////////////////////////////////////////////////////
//int main()
//{
//	CycleSeqQueue Q;
//	CycleSeqQueueInit(&Q);
//
//	CycleSeqQueueEn(&Q, 1);
//	CycleSeqQueueEn(&Q, 2);
//	CycleSeqQueueEn(&Q, 3);
//	CycleSeqQueueEn(&Q, 4);
//	CycleSeqQueueEn(&Q, 5);
//	CycleSeqQueueEn(&Q, 6);
//	CycleSeqQueueEn(&Q, 7);
//	CycleSeqQueueEn(&Q, 8);
//
//	CycleSeqQueueEn(&Q, 9);
//	CycleSeqQueueShow(&Q);
//	CycleSeqQueueDe(&Q);
//	CycleSeqQueueEn(&Q, 9);
//
//	CycleSeqQueueShow(&Q);
//
//	printf("front = %d\n", CycleSeqQueueFront(&Q));
//	printf("size  = %d\n", CycleSeqQueueSize(&Q));
//	CycleSeqQueueDe(&Q);
//	printf("front = %d\n", CycleSeqQueueFront(&Q));
//	printf("size  = %d\n", CycleSeqQueueSize(&Q));
//	return EXIT_SUCCESS;
//}
//
////////////////////////////////////////////////////////////
//bool IsFull(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	return (pcq->rear + 1) % (pcq->capacity + 1) == pcq->front;
//}
//
//bool IsEmpty(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	return pcq->front == pcq->rear;
//}
//void CycleSeqQueueInit(CycleSeqQueue* pcq,int sz)
//{
//	assert(pcq != NULL);
//	pcq->capacity = sz > QUEUE_DEFAULT_SIZE ? sz : QUEUE_DEFAULT_SIZE;
//	pcq->base = (ElemType*)malloc(sizeof(ElemType) * pcq->capacity + 1);
//	pcq->front = pcq->rear = 0;
//}
//
//void CycleSeqQueueEn(CycleSeqQueue* pcq, ElemType x)
//{
//	assert(pcq != NULL);
//	if (IsFull(pcq))
//	{
//		printf("队列已满，[%d]不能入队.\n", x);
//		return;
//	}
//	pcq->base[pcq->rear] = x;
//	pcq->rear = (pcq->rear + 1) % (pcq->capacity + 1);
//}
//
//void CycleSeqQueueDe(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	if (CycleSeqQueueEmpty(pcq))
//	{
//		printf("队列已空，不能出队.\n");
//		return;
//	}
//	pcq->front = (pcq->front + 1) % (pcq->capacity + 1);
//}
//
//ElemType CycleSeqQueueFront(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	assert(!CycleSeqQueueEmpty(pcq));
//	return pcq->base[pcq->front];
//}
//
//int CycleSeqQueueSize(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	int size = 0;
//	for (int i = pcq->front; i != pcq->rear;)
//	{
//		size++;
//		i = (i + 1) % (pcq->capacity + 1);
//	}
//	return size;
//}
//
//bool CycleSeqQueueEmpty(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	return IsEmpty(pcq);
//}
//
//void CycleSeqQueueShow(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	for (int i = pcq->front; i != pcq->rear; )
//	{
//		printf("%d ", pcq->base[i]);
//		i = (i + 1) % (pcq->capacity + 1);
//	}
//	puts("");
//}
//
//void CycleSeqQueueDestroy(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	free(pcq->base);
//	pcq->base = NULL;
//	pcq->capacity = pcq->front = pcq->rear = 0;
//}
