#include <stdio.h>
#include <stdlib.h>

#include "graph/node.h"

int main(int argc, char const *argv[]) {
  printf("Hello World!\n");

  node_t *n1 = malloc(sizeof(node_t));
  node_t *n2 = malloc(sizeof(node_t));
  node_t *n3 = malloc(sizeof(node_t));

  n1->key = 1;
  n2->key = 2;
  n3->key = 3;

  addEdge(n1, n2);

  printf("%d\n", n1->key);
  printf("%d\n", n1->edges[0]->key);
  return 0;
}
