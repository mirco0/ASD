#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
  int value;
  struct stack* next;
} stack;

stack* create_stack(int value){
  stack* stack = malloc(sizeof(struct stack));
  stack->value = value;
  stack->next = (struct stack*)0;
  return stack;
}

int is_stack_empty(stack* stack){
  return stack->next == 0;
}

int stack_push(stack* stack_, int value){
  stack* new_stack = malloc(sizeof(stack));
  new_stack->value = stack_->value;
  new_stack->next = stack_->next;
  stack_->value = value;
  stack_->next = new_stack;
  return 1;
}

int stack_top(stack* stack){
  return stack->value;
}

int stack_pop(stack* stack_){
  if(is_stack_empty(stack_)) return 0;
  int value = stack_->value; 
  stack_->value = stack_->next->value;
  stack* f_stack = stack_->next;
  stack_->next = stack_->next->next;
  free(f_stack);
  return value;
}

void stack_info(stack* stack){
  printf("-----------------\n Top: %d\n Empty %s\n",stack_top(stack),is_stack_empty(stack)? "true":"false");
}
int smain(){

  stack* b = create_stack(10);

  stack_push(b,1);
  stack_info(b);
  
  stack_push(b,2);
  stack_info(b);

  stack_pop(b);
  stack_info(b);

  stack_pop(b);
  stack_info(b);
  return 0;
}
