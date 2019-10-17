#include<stdio.h>
#include<stdlib.h>
#include "Graph.h"

void main() {
 struct adjMat graph;
 int dim, entry;

 printf("Enter dimension: ");
 scanf("%d", &dim);
 printf("Enter root node: ");
 scanf("%d", &entry);

 graph.dimension = dim;

 constructMatrix(&graph);

 scanMatrix(&graph);

 depthFirstSearch(&graph, entry);


}

