#include "queue_s.h"
#include <stdlib.h>

queue_s* create_queue(){
  queue_s* queue = malloc(sizeof(queue_s));
  queue->get_pointer = 0;
  queue->put_pointer = 0;
  return queue;
}

int enqueque(queue_s* queue, int value){
  if(queue->put_pointer >= 0x10000) return 0;
  queue->data[queue->put_pointer] = value;
  queue->put_pointer++;
  return 1;
}

int dequeque(queue_s* queue){
  if(queue->get_pointer >= 0x10000 || queue->get_pointer >= queue->put_pointer) return 0;
  int value = queue->data[queue->get_pointer];
  queue->get_pointer++;
  return value;
}

int is_empty(queue_s* queue){
  return queue->get_pointer==queue->put_pointer;
}
