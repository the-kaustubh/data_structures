#include "./LinkedList.h"

Node insertNodeAtStartLL(Node start, int data) {
  Node newStart = malloc(block);
  newStart->data = data;
  newStart->next = start;
  start = newStart;
  return newStart;
}
Node insertNodeAtEndLL(Node start, int data) {
  Node temp = start, new = malloc(block);
  new->data = data;
  while(temp->next != NULL) temp = temp->next;
  temp->next = new;
  new->next  = NULL;
  return start;
}
Node insertNodeAtPositionLL(Node start, int data, int pos) {
  Node new = malloc(block), temp1 = start, temp2;
  new->data = data;
  for(int i = 1; i < pos; i++) temp1 = temp1->next;
  temp2 = temp1->next;
  temp1->next = new;
  new->next = temp2;
  return start;
}
