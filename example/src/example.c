#include <stdio.h>
#include <stdlib.h>

#include "graph/node.h"

int main(int argc, char const *argv[]) {
  printf("Hello World!\n");

  node_t *n1 = malloc(sizeof(node_t));
  node_t *n2 = malloc(sizeof(node_t));
  node_t *n3 = malloc(sizeof(node_t));
  node_t *n4 = malloc(sizeof(node_t));


  n1->key = 1;
  n2->key = 2;
  n3->key = 3;

  addEdge(n1, n2);
  addEdge(n1, n3);

  for (int i = 0; i < n1->degree; i++) {
    printf("%d\n", n1->edges[i]->key);
  }

  printf("\n");

  int err = disconnectEdge(n1, n4);
  printf("Error value: %d\n", err);

  for (int i = 0; i < n1->degree; i++) {
    printf("%d\n", n1->edges[i]->key);
  }


  return 0;
}
