#include<stdio.h>
#include<stdlib.h>
#include "LinkedList.h"

void main() {
 int arr[5];
 Node n = NULL;

 for(int i = 0; i < 5; i++) {
  arr[i] = i;
  if(n == NULL) n = createNodeLL(arr[i]);
  else insertNodeAtEndLL(n, arr[i]);
 }
 Node f = n;
 while(n->next != NULL) {
  printf("%d ", n->data);
  n = n->next;
 }
 printf("\n");
 freeLL(f);

}
