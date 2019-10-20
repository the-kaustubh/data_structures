#ifndef __STACK_H
#define __STACK_H

typedef struct stack {
  int top, size;
  int *data;
} *Stack;

Stack createStack(int size);

int stPop(Stack s);

int stPush(Stack s, int value);

int stPeek(Stack s);

void displayStack(Stack s);

void destroyStack(Stack s);

int isEmpty(Stack s);

int isFull(Stack s);

#endif
