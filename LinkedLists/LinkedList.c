#include "./LinkedList.h"

Node createNodeLL(int data) {
  Node n = (Node)malloc(LL_BLOCK_SIZE);
  n->data = data;
  return n;
}

Node insertNodeAtStartLL(Node start, int data) {
  Node newStart = malloc(LL_BLOCK_SIZE);
  newStart->data = data;
  newStart->next = start;
  start = newStart;
  return newStart;
}
Node insertNodeAtEndLL(Node start, int data) {
  Node temp = start, new = malloc(LL_BLOCK_SIZE);
  new->data = data;
  while(temp->next != NULL) temp = temp->next;
  temp->next = new;
  new->next  = NULL;
  return start;
}
Node insertNodeAtPositionLL(Node start, int data, int pos) {
  Node new = malloc(LL_BLOCK_SIZE), temp1 = start, temp2;
  new->data = data;
  for(int i = 1; i < pos; i++) temp1 = temp1->next;
  temp2 = temp1->next;
  temp1->next = new;
  new->next = temp2;
  return start;
}

Node deleteKeyLL(Node start, int key) {
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
      return start;
    }
  }
}

Node deletePositionLL(Node start, int pos) {
  /*
    delete a Node from Given position.
  */
  Node temp1 = start, temp2;
  for(int i = 1; i < pos; i++) temp1 = temp1->next;
  temp2 = temp1->next->next;
  free(temp1->next);
  temp1->next = temp2;
  return start;
}

void main(/* arguments */) {
  /* code */
}
