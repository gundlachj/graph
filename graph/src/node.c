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

int disconnectEdge(node_t *node, node_t *badNode) {
  node_t **newEdges = calloc(node->degree - 1, sizeof(node_t));

  unsigned int newIdx = 0;
  for (int i = 0; i < node->degree; i++) {
    if (node->edges[i] != badNode) {
      newEdges[newIdx] = node->edges[newIdx];
      newIdx += 1;
    }
  }

  if (newIdx == node->degree) {
    // Bad node was not found
    free(newEdges);
    return 1;
  }

  node->degree -= 1;
  node->edges = newEdges;
  return 0;
}
