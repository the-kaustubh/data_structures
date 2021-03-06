// Author : Kaustubh Murumkar

#ifndef __STDIO_H
  #include <stdio.h>
#endif
#ifndef __STDLIB_H
  #include <stdlib.h>
#endif

typedef struct node {
  int data;
  struct node * next;
  struct node * prev;
}*Node;

long unsigned int DLL_BLOCK_SIZE = sizeof(struct node);

Node createNodeDLL(int data);

Node insertAtStartDLL(Node start, int data);

Node insertAtEndDLL(Node start, int data);

Node insertAtPositionDLL(Node start, int data, int pos);

Node deleteKeyDLL(Node start, int key);

Node deletePositionDLL(Node start, int pos);

Node sortDLL(Node start);

Node reverseDLL(Node start);
