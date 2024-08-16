#include <stack_d.h>
#include <stdlib.h>

stack_d* create_stack(){
    stack_d* stack = malloc(sizeof(stack_d));
    stack->first = 0;
}

int push_stack_d(stack_d* stack, int value){
    stack_node* node = malloc(sizeof(stack_node));
    node->data = value;
    node->next = stack->first;
    stack->first = node;
}

int pop_stack_d(stack_d* stack){
    if(stack->first == 0) return 0;
    int value = stack->first->data;
    stack_node* first = stack->first;
    stack->first = stack->first->next;
    free(first);
    return value;
}

int top_stack_d(stack_d* stack){
    return stack->first->data;
}

int is_empty_stack_d(stack_d* stack){
    return stack->first == 0;
}