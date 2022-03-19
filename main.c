#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int* arr;
    int curr_size;
    int last_element;
} Stack; 


void init_stack(Stack *stack){
    stack->last_element = -1;
    stack->curr_size = 8;
    //stack->
}


void add_stack(Stack *stack, int item){
    if(stack->last_element + 1){
        stack->curr_size*=2;
        int* tmp
    }
    stack->arr[++stack->last_element] = item;
}


void pop_stack(Stack *stack){
    stack->last_element--;
}


void print_stack(Stack *stack){
    for(int i = stack->last_element; i >= 0; i--){
        printf("%d\n", stack->arr[i]);
    }
    printf("\n");
}


int main(){
    Stack stack;
    init_stack(&stack);

    add_stack(&stack, 6);
    print_stack(&stack);

    add_stack(&stack, 5);
    print_stack(&stack);

    pop_stack(&stack);
    print_stack(&stack);
}
