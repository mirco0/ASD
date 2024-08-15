#ifndef DICT_BST_H
#define DICT_BST_H

#include <a_binary_tree.h>
#include <entry.h>

typedef struct dict_bst {
  a_binary_tree* tree;
} dict_bst;

dict_bst* create_dict();
void insert(dict_bst* dict, entry entry);
void delete(dict_bst* dict, char elem);
char search(dict_bst* dict, int key);
void DFS(dict_bst* dict,int node_index);

#endif
