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
//void SeqQueueInit(CycleSeqQueue* pcq,int sz = QUEUE_DEFAULT_SIZE);
//void SeqQueueEn(CycleSeqQueue* pcq, ElemType x);
//void SeqQueueDe(CycleSeqQueue* pcq);
//ElemType SeqQueueFront(CycleSeqQueue* pcq);
//int  SeqQueueSize(CycleSeqQueue* pcq);
//bool SeqQueueEmpty(CycleSeqQueue* pcq);
//void SeqQueueShow(CycleSeqQueue* pcq);
//void SeqQueueDestroy(CycleSeqQueue* pcq);
//
////////////////////////////////////////////////////////////
//int main()
//{
//	CycleSeqQueue Q;
//	SeqQueueInit(&Q);
//
//	SeqQueueEn(&Q, 1);
//	SeqQueueEn(&Q, 2);
//	SeqQueueEn(&Q, 3);
//	SeqQueueEn(&Q, 4);
//	SeqQueueEn(&Q, 5);
//	SeqQueueEn(&Q, 6);
//	SeqQueueEn(&Q, 7);
//	SeqQueueEn(&Q, 8);
//
//	SeqQueueShow(&Q);
//	SeqQueueDe(&Q);
//	SeqQueueShow(&Q);
//
//	printf("front = %d\n", SeqQueueFront(&Q));
//	printf("size  = %d\n", SeqQueueSize(&Q));
//
//	return EXIT_SUCCESS;
//}
//
////////////////////////////////////////////////////////////
//void SeqQueueInit(CycleSeqQueue* pcq,int sz)
//{
//	assert(pcq != NULL);
//	pcq->capacity = sz > QUEUE_DEFAULT_SIZE ? sz : QUEUE_DEFAULT_SIZE;
//	pcq->base = (ElemType*)malloc(sizeof(ElemType) * pcq->capacity);
//	pcq->front = pcq->rear = 0;
//}
//
//void SeqQueueEn(CycleSeqQueue* pcq, ElemType x)
//{
//	assert(pcq != NULL);
//	if (pcq->rear >= pcq->capacity)
//	{
//		printf("队列已满，[%d]不能入队.\n", x);
//		return;
//	}
//	pcq->base[pcq->rear++] = x;
//}
//
//void SeqQueueDe(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	if (SeqQueueEmpty(pcq))
//	{
//		printf("队列已空，不能出队.\n");
//		return;
//	}
//	pcq->front++;
//}
//
//ElemType SeqQueueFront(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	assert(!SeqQueueEmpty(pcq));
//	return pcq->base[pcq->front];
//}
//
//int SeqQueueSize(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	return (pcq->rear - pcq->front);
//}
//
//bool SeqQueueEmpty(CycleSeqQueue* pcq)
//{
//	return pcq->front >= pcq->rear;
//}
//
//void SeqQueueShow(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	for (int i = pcq->front; i < pcq->rear; i++)
//	{
//		printf("%d ", pcq->base[i]);
//	}
//	puts("");
//}
//
//void SeqQueueDestroy(CycleSeqQueue* pcq)
//{
//	assert(pcq != NULL);
//	free(pcq->base);
//	pcq->base = NULL;
//	pcq->capacity = pcq->front = pcq->rear = 0;
//}
