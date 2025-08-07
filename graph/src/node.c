#include "graph/node.h"

int addEdge(node_t *node, node_t *nextNode) {
  if (node->degree == 0) {
    node->edges = malloc(sizeof(node_t));
  } else {
    node->edges = realloc(node->edges, node->degree * sizeof(node_t));
  }

  if (node->edges == NULL) {
    return 1;
  }

  node->edges[node->degree] = nextNode;
  node->degree += 1;

  return 0;
}
