// Author : Kaustubh Murumkar

#ifndef __STDIO_H
  #include <stdio.h>
  #include <stdlib.h>
#endif

typedef struct node {
  int data;
  struct node * next;
}* Node;

const long unsigned int LL_BLOCK_SIZE = sizeof(Node);

Node createNodeLL(int data);

Node insertNodeAtStartLL(Node start, int data);

Node insertNodeAtEndLL(Node start, int data);

Node insertNodeAtPositionLL(Node start, int data, int pos);

Node deleteKeyLL(Node start, int key);

Node deletePositionLL(Node start, int pos);

Node sortLL(Node start);

Node reverseLL(Node start);
