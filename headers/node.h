#ifndef NODE_H
#define NODE_H

#include "entry.h"

typedef struct node {
  entry entry;
  struct node* next;
} node;

#endif

