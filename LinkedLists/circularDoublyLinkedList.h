// Author : Kaustubh Murumkar

#ifndef __STDIO_H
  #include <stdio.h>
  #include <stdlib.h>
#endif


typedef struct node {
  int data;
  struct node * next;
  struct node * prev;
} *Node;
const long unsigned int CDLL_BLOCK_SIZE = sizeof(Node);

Node insertAtStartCDLL(Node start, int data);

Node insertAtEndCDLL(Node start, int data);

Node insertAtPositionCDLL(Node start, int data, int pos);

Node deleteKeyCDLL(Node start, int key);

Node deletePositionCDLL(Node start, int pos);

Node sortCDLL(Node start);

Node reverseCDLL(Node start);
