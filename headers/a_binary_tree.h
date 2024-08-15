#ifndef A_BINARY_TREE_H
#define A_BINARY_TREE_H
#include<entry.h>

typedef struct a_binary_tree {
  entry data[0x10000];
} a_binary_tree;

a_binary_tree *create_tree();
int sx(a_binary_tree *tree, int node);
int dx(a_binary_tree *tree, int node);

#endif
