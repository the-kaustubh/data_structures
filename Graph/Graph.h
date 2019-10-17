#ifndef __GRAPH_H
#define __GRAPH_H

struct adjMat {
 int dimension;
 int **adjacencyMatrix;
};


/* Random helper functions */
char mapNumToLetter(int num);

/* Allocate and Initialize an 
   adjacency matrix in the memory 
*/
void constructMatrix(struct adjMat *am);

/* Console Interactions */
void printMatrix(struct adjMat *am);
void scanMatrix(struct adjMat *am);

/* Depth First Search Functions*/
void depthFirstSearch(struct adjMat *am, int rootNode); 
void DFS(struct adjMat *am, int rootNode, int *visited); 

/* Breadth First Search Functions*/
void breadthFirstSearch(struct adjMat *am, int rootNode);
void BFS(struct adjMat *am, int rootNode, int *visited); 

/* free the memory occupied by the adjacecy matrix */
void freeAdjMat(struct adjMat *am);

#endif