#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

// function for check underflow
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
        return 0;
}

// function for check overflow
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
        return 0;
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
    int value;
    if (isFull(s))
    {
        printf("Stack overflow:you can't push %d because stack is full:\n", value);
    }
    else
    {
        s->top++;
        printf("Enter the value:");
        scanf("%d", &value);
        s->arr[s->top] = value;
    }

    return 0;
}