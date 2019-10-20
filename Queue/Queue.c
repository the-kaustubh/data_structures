#include "Queue.h"

// typedef struct queue {
//  int top, size, rear;
//  int *data;
// } *Queue;

Queue createQueue(int size) {
  Queue Q  = (Queue)malloc(sizeof(struct queue));
  Q->rear  = -1;
  Q->size  = size-1;
  Q->data  = malloc(sizeof(int) * Q->size);
  return Q;
}

void freeQueue(Queue q) {
 free(q->data);
 free(q);
}

static void __adjust__(int * arr, int end) {
  for(int i = 0; i < end; i++) {
    arr[i  ] = arr[i+1];
  }
}

int DeQueue(Queue q) {
  int retVal = q->data[0];
  if(q->rear == -1) {
    printf("\n Exception: Queue is Empty\n");
    return 0;
  }
  __adjust__(q->data, q->rear);
  q->rear = q->rear - 1;
  return retVal;
}

void EnQueue(Queue q, int value) {
  if(q->rear == q->size) {
    printf("\nException: Queue is full");
    return;
  }
  q->rear = q->rear + 1;
  q->data[q->rear] = value;
}

void displayQueue(Queue q) {
  printf("\nQueue (\n\t" );
  for(int i = 0; i <= q->rear; i++) {
    printf(" %d", q->data[i]);
  }
  printf("\n)\n");
}

int isEmpty(Queue q) {
 return (-1 == q->rear);
}
