#include "DoublyLinkedList.h"

Node createNodeDLL(int data) {
  Node retNode = malloc(DLL_BLOCK_SIZE);
  retNode->data = data;
  return retNode;
}

Node insertAtStartDLL(Node start, int data) {
  Node new = createNodeDLL(data);
    new->next   = start;
  start->prev   =   new;
  return start  = new;
}

Node insertAtEndDLL(Node start, int data) {
  Node new = createNodeDLL(data), temp = start;
  new->next = NULL;
  while(temp->next != NULL) temp = temp->next;
  temp->next = new;
  new->prev = temp;
  return start;
}

Node insertAtPositionDLL(Node start, int data, int pos) {
  Node new = createNodeDLL(data), temp1 = start, temp2;
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
  Node temp1 = start, temp2;
  for(int i = 1; i < pos; i++) temp1 = temp1->next;
  temp2 = temp1->next->next;
  free(temp1->next);
  temp1->next = temp2;
  temp2->prev = temp1;
  return start;
}
