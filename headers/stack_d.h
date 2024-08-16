#ifndef STACK_D
#define STACK_D

typedef struct stack_node {
    int data;
    struct stack_node * next;
} stack_node;

typedef struct stack_d {
    stack_node* first;
} stack_d;

stack_d* create_stack_d();
int push_stack_d(stack_d* stack, int value);
int pop_stack_d(stack_d* stack);
int top_stack_d(stack_d* stack);
int is_empty_stack_d(stack_d* stack);

#endif