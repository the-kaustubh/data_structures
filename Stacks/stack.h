#ifndef __STDIO_H
 #include <stdio.h>
 #include <stdlib.h>
#endif

typedef struct stack {
  int top, size;
  int *data;
} *Stack;

Stack createStack(int size);

int stPop(Stack s);

int stPush(Stack s, int value);

int stPeek(Stack s);

void displayStack(Stack s);
