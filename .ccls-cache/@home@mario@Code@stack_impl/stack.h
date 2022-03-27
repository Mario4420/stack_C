typedef struct{
    int* arr;
    int curr_size;
    int last_element;
} Stack; 

void init_stack(Stack *stack);
void add_stack(Stack *stack, int item);
void pop_stack(Stack *stack);
void print_stack(Stack *stack);
