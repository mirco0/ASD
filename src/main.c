#include "entry.h"
#include <queue_s.h>
#include <dict_BST.h>

int main(){
  dict_bst* dict = create_dict();
  insert(dict,(entry){'A', 100});
  insert(dict,(entry){'l', 90});
  insert(dict,(entry){'b', 80});
  insert(dict,(entry){'e', 95});
  insert(dict,(entry){'r', 110});
  insert(dict,(entry){'o', 105});
  DFS(dict,1);
  return 0;
}
