#include "circularDoublyLinkedList.h"

Node insertAtStart(Node start, int data) {
  Node new = malloc(block), last = start->prev;
  new->data = data;
   last->next =   new;
    new->prev =  last;
    new->next = start;
  start->prev = new;
  return start = new;
}

Node insertAtEnd(Node start, int data) {
  Node new = malloc(block), last = start->prev;
  new->data = data;
  last->next = new;
  new->prev = last;
  new->next = start;
  start->prev = new;
  return start;
}

Node insertAtPosition(Node start, int data, int pos) {
  Node new = malloc(block), temp1 = start, temp2;
  new->data = data;
  for(int i = 1; i < pos; i++) temp1 = temp1->next;
  temp2 = temp1->next;
  temp1->next = new;
  new->prev = temp1;
  new->next = temp2;
  temp2->prev = new;
  return start;
}
