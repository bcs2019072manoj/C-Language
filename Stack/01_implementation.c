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

// function for push operation
void push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("Stack overflow:you can't push %d because stack is full:\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

// function for pop operation
void pop(struct stack *ptr, int value)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow:you can't pop  because stack is empty:\n");
    }
    else
    {
       value = ptr->arr[ptr->top];
       value--;
       printf("%d is poped from the stack :",value);

    }
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

    printf("Before pushing :%d\n", isFull(s));
    printf("Before Empty :%d\n", isEmpty(s));
    push(s, 3);
    push(s, 30);
    push(s, 25);
    push(s, 45);
    push(s, 36);
    push(s, 33);
    pop(s,36);
    printf("After pushing :%d\n", isFull(s));
    printf("After Empty :%d\n", isEmpty(s));
    return 0;
}