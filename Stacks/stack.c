#include "stack.h"
#include<stdio.h>
#include<stdlib.h>

Stack createStack(int size) {
  Stack newStack = malloc(sizeof(struct stack));
  newStack->top = -1;
  newStack->data = malloc(sizeof(int) * size);
  newStack->size = size;
  return newStack;
}

int stPop(Stack s) {
  int retVal;
  if(isEmpty(s)) return -0;
  retVal = s->data[s->top];
  s->top -= 1;
  return retVal;
}

int isEmpty(Stack s) {
 return (s->top == -1);
}

int isFull(Stack s) {
 return (s->top == s->size-1);
}

int stPush(Stack s, int value) {
  if(isFull(s)) return 0;
  s->top ++;
  s->data[s->top] = value;
  return 1;
}

int stPeek(Stack s) {
  return s->data[s->top];
}

void displayStack(Stack s) {
  printf("\nStack (\n\tTOP\n\t" );
  for(int i = s->top; i >= 0; i--) {
    printf("%d ", s->data[i]);
  }
  printf("\n)\n" );
}
void destroyStack(Stack s) {
 free(s->data);
 free(s);
}
