#ifndef __TREE_H
#define __TREE_H

struct node {
 int data;
 struct node *left;
 struct node * right;
};

#define NODE_SIZE sizeof(struct node)

struct node * createNode(int data);

void insertLeft(struct node *, int data);

void insertRight(struct node *, int data);

struct node * insert(struct node *, int data);

int searchNode(struct node *, int key);

void clearTree(struct node *);

void inOrder(struct node *);

void preOrder(struct node *);

void postOrder(struct node *);

#endif
