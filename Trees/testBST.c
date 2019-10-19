#include<stdio.h>
#include "BinarySearchTree.h"

void main() {
 struct node * root=NULL;
 int choice=0, num;
 do {
     printf("\n1. Insert \n2. Search \n3. Print sorted list \n4. Exit\n");
     scanf("%d", &choice);

     switch(choice) {
         case 1:
             printf("Enter number to insert: ");
             scanf("%d", &num);
             if(root == NULL) root = createNode( num);
             else insert(root, num);
             break;
         case 2:
             printf("Enter number to search: ");
             scanf("%d", &num);
             int found = searchNode(root, num);
             if(found) printf("Found");
             else printf("Not Found");
             break;
         case 3:
             inOrder(root);
             break;
         default:
             choice = 0;
     }
 } while (choice);
 clearTree(root);
} 
