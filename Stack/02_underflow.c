#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

// function for check underflow
void isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Underflow");
    }
    else
        printf("The stack is not full");
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
    isEmpty(s);
    return 0;
}