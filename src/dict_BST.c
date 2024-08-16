#include <a_binary_tree.h>
#include <dict_BST.h>
#include <entry.h>
#include <queue_s.h>
#include <stdio.h>
#include <stdlib.h>

dict_bst* create_dict(){
  dict_bst* dict = malloc(sizeof(dict_bst));
  dict->tree = create_tree();
  return dict; 
}

void insert(dict_bst* dict, entry entry){ 
  int node_index = 1;
  struct entry node_root = dict->tree->data[node_index];
  while(dict->tree->data[node_index].key != 0){
    if(entry.key == node_root.key){
      break;
    }
    if(entry.key < node_root.key){
      node_index = 2*node_index; //sx
    }else{ 
      node_index = 2*node_index+1; //dx 
    }
    node_root = dict->tree->data[node_index]; 
  }
  #ifdef DEBUG
    printf("Set entry ('%c',%d) at %d\n",entry.data, entry.key,node_index);
  #endif
  dict->tree->data[node_index] = entry;
}

void delete(dict_bst* dict, char elem){
  
}

char search(dict_bst* dict, int key){
  int node_index = 1;
  entry node_root = dict->tree->data[node_index];
  while(&node_root != (entry*)0){
    if(key == node_root.key){
      return node_root.data;
    }else if(key < node_root.key){
      node_index = sx(dict->tree, node_index); 
    }else{ 
      node_index = dx(dict->tree, node_index); 
    }
    node_root = dict->tree->data[node_index];
  }
  return '\0';
}

void DFS(dict_bst* dict,int node_index){
  queue_s* queue = create_queue_s();
  enqueque_queue_s(queue,node_index);
  while (!is_empty_queue_s(queue)) {
    int u = dequeque_queue_s(queue);
    if(u != 0){
      if(dict->tree->data[u].key != 0)
        printf("'%c', ",dict->tree->data[u].data);
      DFS(dict,sx(dict->tree, u));
      DFS(dict,dx(dict->tree, u));
    }
  }
}

