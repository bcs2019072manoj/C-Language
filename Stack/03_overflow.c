#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

// function for check underflow
void isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size-1)
    {
        printf("overflow");
    }
    else
        printf("The stack  empty");
}

int main()
{
    // struct stack s;
    // s.size=80;
    // s.top=-1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s;
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack has been created successfully :\n");
    isFull(s);
    return 0;
}