#include <stdio.h>
#include <stdlib.h>

#include "graph/node.h"

int main(int argc, char const *argv[]) {
  printf("Hello World!\n");

  node_t *node = malloc(sizeof(node_t));
  node->key = 1;
  printf("%d\n", node->key);
  return 0;
}
