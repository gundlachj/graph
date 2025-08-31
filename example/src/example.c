#include <stdio.h>
#include <stdlib.h>

#include "graph/node.h"

void printNode(const node_t *node) {
  printf("Node: ");
  printf("[Key: %d] ", node->key);
  printf("[Edges: ");
  for (int i = 0; i < node->degree; i++) {
    printf("%d", node->edges[i]->key);
    if (i != node->degree - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

int main(int argc, char const *argv[]) {
  node_t *n1 = malloc(sizeof(node_t));
  node_t *n2 = malloc(sizeof(node_t));
  node_t *n3 = malloc(sizeof(node_t));
  node_t *n4 = malloc(sizeof(node_t));

  n1->key = 1;
  n2->key = 2;
  n3->key = 3;

  addEdge(n1, n2);
  addEdge(n1, n3);

  printNode(n1);

  printf("\n");

  int err = disconnectEdge(n1, n4);
  if (err == 1) {
    printf("Failed to disconnect node with key (%d)\n", n4->key);
  } else {
    printf("Disconnected node with key (%d)\n", n4->key);
    printNode(n1);
  }

  return 0;
}
