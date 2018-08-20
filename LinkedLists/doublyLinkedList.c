  #include <stdio.h>
  #include <stdlib.h>

typedef struct node {
  int data;
  struct node * next;
  struct node * prev;
}*Node;
long unsigned int block = sizeof(Node);

Node insertAtStart(Node start, int data) {
  Node new = malloc(block);
  new->data = data;
    new->next   = start;
  start->prev   =   new;
  return start  = new;
}

Node insertAtEnd(Node start, int data) {
  Node new = malloc(block), temp = start;
  new->data = data;
  new->next = NULL;
  while(temp->next != NULL) temp = temp->next;
  temp->next = new;
  new->prev = temp;
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
