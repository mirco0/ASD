#ifndef QUEUE_S
#define QUEUE_S

#include <entry.h>

typedef struct queue_s {
  int data[0x10000];  //2^16  
  int get_pointer;
  int put_pointer;
} queue_s; 

queue_s* create_queue_s();
int enqueque_queue_s(queue_s* queue, int value);
int dequeque_queue_s(queue_s* queue);
int is_empty_queue_s(queue_s* queue);

#endif
