// Author : Kaustubh Murumkar

#ifndef __STDIO_H
  #include <stdio.h>
  #include <stdlib.h>
#endif

typedef struct node {
  int data;
  struct node * next
}* Node;

const long unsigned int block = sizeof(Node);

Node insertNodeAtStartLL(Node start, int data);

Node insertNodeAtEndLL(Node start, int data);

Node insertNodeAtPositionLL(Node start, int data, int pos);
