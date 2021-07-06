// Author : Kaustubh Murumkar

#ifndef __STDIO_H
  #include <stdio.h> // The Definition of `NULL`
#endif
#ifndef __STDLIB_H
  #include <stdlib.h>// The `malloc` function
#endif

#ifndef __LL_H
#define __LL_H
typedef struct node {
  int data;
  struct node * next;
}* Node;

#define LL_BLOCK_SIZE sizeof(struct node)

Node createNodeLL(int data);

Node insertNodeAtStartLL(Node start, int data);

Node insertNodeAtEndLL(Node start, int data);

Node insertNodeAtPositionLL(Node start, int data, int pos);

Node deleteKeyLL(Node start, int key);

Node deletePositionLL(Node start, int pos);

Node sortLL(Node start);

Node reverseLL(Node start);

void freeLL(Node n);

#endif
