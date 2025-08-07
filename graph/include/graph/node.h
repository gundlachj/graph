#ifndef NODE_H
#define NODE_H

#include <stdlib.h>

typedef struct node {
  int key;
  unsigned int degree; // Number of edges
  struct node **edges;
} node_t;

int addEdge(node_t *node, node_t *nextNode);

int disconnectEdge(node_t *node, node_t *badEdge);

#endif /* end of include guard: NODE_H */
