#include <stdio.h>
#include "stack.h"


int main(){
    Stack stack;
    init_stack(&stack);

    add_stack(&stack, 6);
    print_stack(&stack);

    add_stack(&stack, 5);
    print_stack(&stack);

    pop_stack(&stack);
    print_stack(&stack);
    printf("size: %d\n", stack.curr_size);

    for(int i = 0; i < 10; i++){
        add_stack(&stack, i);
    }
    printf("\n");
    printf("size: %d\n", stack.curr_size);

    return 0;
}
