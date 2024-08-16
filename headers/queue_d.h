#ifndef QUEUE_D
#define QUEUE_D

#include <queue_s.h>

typedef struct queue_d {

} queue_d;


queue_d* create_queue_d();
int enqueque_queue_d(queue_d* queue, int value);
int dequeque_queue_d(queue_d* queue);
int is_empty_queue_d(queue_d* queue);

#endif