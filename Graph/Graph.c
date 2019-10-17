#include<stdio.h>
#include<stdlib.h>
#include "Graph.h"
#include "Queue.h"

/* Take adjacency matrix 
   for input and perform
   search operations:
   [x] DFS
   [ ] BFS
   [ ] Dijkstra
   [ ] Bellman-Ford
*/
char mapNumToLetter(int num) {
 return (char)(num+65);
} 

void constructMatrix(struct adjMat *am) {
 int dim = am->dimension;
 am->adjacencyMatrix = (int**)malloc(sizeof(int *) * dim);
 for(int i = 0; i < dim; i++) {
  am->adjacencyMatrix[i] = (int*)malloc(sizeof(int) * dim);
 }
 int i, j;
 for(i = 0; i < dim; i++) {
  for(j = 0; j < dim; j++) {
   am->adjacencyMatrix[i][j] = 0;
  }
 }
}

void printMatrix(struct adjMat *am) {
 int dim = am->dimension;
 int i, j;
 for(i = 0; i < dim; i++) {
  for(j = 0; j < dim; j++) {
   printf("%d ", am->adjacencyMatrix[i][j]);
  }
  printf("\n");
 }
}

void scanMatrix(struct adjMat *am) {
 int dim = am->dimension;
 int i, j;
 for(i = 0; i < dim; i++) {
  for(j = 0; j < dim; j++) {
   scanf("%d", &am->adjacencyMatrix[i][j]);
  }
 }
}

void DFS(struct adjMat *am, int rootNode, int *visited) {
 int dim = am->dimension;

 visited[rootNode] = 1;
 printf("Visited %c\n", mapNumToLetter(rootNode));
 for(int i = 0; i < dim; i++) {
  if( 1 == am->adjacencyMatrix[rootNode][i] && 1 != visited[i] ) 
   DFS(am, i, visited);
 }
}

void depthFirstSearch(struct adjMat *am, int rootNode) {
 int dim = am->dimension;
 int *visited = (int *) malloc( sizeof(int) * dim);
 for( int i = 0; i < dim; i++) 
  visited[i] = 0;
 
 DFS(am, rootNode, visited);
 
 free(visited);
 return;
}

void breadthFirstSearch(struct adjMat *am, int rootNode) {
 int dim = am->dimension;
 int *visited = (int *) malloc( sizeof(int) * dim);
 
 for( int i = 0; i < dim; i++)  visited[i] = 0;

 Queue q = createQueue(dim);
 EnQueue(q, rootNode);
 visited[rootNode] = 1;
 printf("Visited %c\n", mapNumToLetter(rootNode));

 while(!isEmpty(q)) {
   int el = DeQueue(q);
   for(int i = 0; i < dim; i++) {
     if(0 == visited[i] && 1 == am->adjacencyMatrix[el][i]) {
       EnQueue(q, i);
       visited[i] = 1;
       printf("Visited %c\n", mapNumToLetter(i));
     }
   }
 }
  
 free(visited);
 return;
}


void freeAdjMat(struct adjMat *am) {
 int dim = am->dimension;
 for(int i = 0; i < dim; i++) {
  free(am->adjacencyMatrix[i]);
 }
 free(am->adjacencyMatrix);
 
}
