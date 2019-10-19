#include<stdio.h>
#include<stdlib.h>

#include "BinarySearchTree.h"

struct node * createNode(int data) {
 struct node * Node = (struct node *) malloc(NODE_SIZE);

 Node->data = data;
 Node->left = NULL;
 Node->right = NULL;

 return Node;
}

struct node * insert(struct node * Node, int data) {
 if(Node == NULL) 
  return createNode(data);
 if(Node->data <= data) {
  Node->right = insert(Node->right, data);
 } else {
  Node->left = insert(Node->left, data);
 }
 return Node;
}
/*
void clearTree(struct node * Node) {
 if(Node->left == NULL && Node->right == NULL)
  free(Node);
 if(Node->left != NULL) clearTree(Node->left);
 if(Node->right != NULL) clearTree(Node->right);
}
*/
int searchNode(struct node * Node, int key) {
 if(Node->data == key) return 1;
 if(Node->data < key && Node->right != NULL) return searchNode(Node->right, key);
 if(Node->data > key && Node->left != NULL) return searchNode(Node->left, key);
}

void inOrder(struct node *root) {
 if(root ==  NULL) return;
 inOrder(root->left);
 printf(" [ %d ] ", root->data);
 inOrder(root->right);
}
void clearTree(struct node *Node) {
 if(Node == NULL) return;
 clearTree(Node->left);
 clearTree(Node->right);
 free(Node);
}
