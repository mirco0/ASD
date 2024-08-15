#include<a_binary_tree.h>
#include <stdlib.h>

a_binary_tree* create_tree(){
  a_binary_tree* tree = malloc(sizeof(a_binary_tree));
  return tree;
}

int sx(a_binary_tree* tree, int node){
  int sx = 2*node;
  if(tree->data[sx].key == 0) return 0;
  return sx;
}

int dx(a_binary_tree* tree, int node){
  int dx = 2*node+1;
  if(tree->data[dx].key == 0) return 0;
  return dx;
}


