#include "circularDoublyLinkedList.h"

Node insertAtStart(Node start, int data) {
  Node new = malloc(CDLL_BLOCK_SIZE), last = start->prev;
  new->data = data;
   last->next =   new;
    new->prev =  last;
    new->next = start;
  start->prev = new;
  return start = new;
}

Node insertAtEnd(Node start, int data) {
  Node new = malloc(CDLL_BLOCK_SIZE), last = start->prev;
  new->data = data;
  last->next = new;
  new->prev = last;
  new->next = start;
  start->prev = new;
  return start;
}

Node insertAtPosition(Node start, int data, int pos) {
  Node new = malloc(CDLL_BLOCK_SIZE), temp1 = start, temp2;
  new->data = data;
  for(int i = 1; i < pos; i++) temp1 = temp1->next;
  temp2 = temp1->next;
  temp1->next = new;
  new->prev = temp1;
  new->next = temp2;
  temp2->prev = new;
  return start;
}


Node deleteKeyDLL(Node start, int key) {
  /*(
    delete a `Node` having data as `key`
      if key is in next Node, then free the next Node
      but put later Node in `next`
  )*/
  Node pre, next;
  pre = start;
  for(;pre->next != NULL; pre = pre->next) {
    if(pre->next->data == key) {
      next = pre->next->next;
      free(pre->next);
      pre->next = next;
      next->prev = pre;
      return start;
    }
  }
}

Node deletePositionDLL(Node start, int pos) {
  /*
    delete a Node from Given position.
  */
  Node new = malloc(DLL_BLOCK_SIZE), temp1 = start, temp2;
  for(int i = 1; i < pos; i++) temp1 = temp1->next;
  temp2 = temp1->next->next;
  free(temp1->next);
  temp1->next = temp2;
  temp2->prev = temp1;
  return start;
}
