#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int* arr;
    int curr_size;
    int last_element;
} Stack; 

void init_stack(Stack *stack){
    stack->last_element = -1;
    stack->curr_size = 0;
    stack->arr = malloc(stack->curr_size*sizeof(int));
}


void add_stack(Stack *stack, int item){
    stack->curr_size++;
    stack->arr = realloc(stack->arr, stack->curr_size * sizeof(int));
    stack->arr[++stack->last_element] = item;
}


int pop_stack(Stack *stack){
    if(stack->last_element == 0){
        fprintf(stderr, "error: stack is empty\n");
    }
    else{
        stack->curr_size--;
        stack->arr = realloc(stack->arr, stack->curr_size * sizeof(int));
        stack->last_element--;
        return stack->arr[stack->last_element+1];
    }
}


void print_stack(Stack *stack){
    for(int i = stack->last_element; i >= 0; i--){
        printf("%d\n", stack->arr[i]);
    }
    printf("\n");
}
