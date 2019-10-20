#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

void printArr(int * k, int len);

int main(int argc, char *argv[]) {
 if(argc == 1) {
  printf("Usage: testStack arraySize [ array values ]\n");
  return 1;
 }
 int len = atoi(argv[1]);
 if(len != argc-2) {
  printf("Incomplete array.\nExiting.\n");
  return 1;
 }
 int *array = (int *)malloc(sizeof(int) * len);

 for(int i = 0; i < len; i++) {
  array[i] = atoi(argv[i+2]);
 }
 printf("Before reversing array:\n");
 printArr(array, len);
 Stack s = createStack(len);
 for(int i = 0; i < len; i++) {
  stPush(s, array[i]);
 }
 printf("%s", (isFull(s)) ? "Stack is Full" : "");
 displayStack(s);
 printf("Reversed array:\n");
 for(int i = 0; i < len; i++) {
  array[i] = stPop(s);
  //printf("%d ", stPop(s));
 }
 printf("\n");
 printArr(array, len);
 destroyStack(s);
 free(array);
}

void printArr(int * k, int len) {
 for(int i = 0;i < len; i++) {
  printf("%d ", k[i]);
 }
 printf("\n");
}
