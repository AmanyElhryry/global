
#include"global.h"
#define LINKED_QUEUE
#define NULL 0

#ifdef LINKED_QUEUE
typedef struct  queuenode{
QueueEntry entry;
struct queuenode *next;
}QueueNode;

typedef struct  queue{
QueueNode *front ;
QueueNode *rear ;
int size;
}Queue ;

#else
typedef struct  queue {
int front ;
int rear ;
int size ;
QueueEntry entry[MAXQUEUE];
}Queue;

void CraetQueue(Queue *pq);
void AppendQueue(QueueEntry e,Queue *pq);
void ServeQueue(QueueEntry *pe,Queue *pq);
int queueEmpty(Queue *pq);

int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraversaQueue(Queue *pq , void (*pf)(QueueEntry));
#endif
