#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void isEmpty(struct Node *top){
    if(top==NULL){
        printf("\n Stack is Empty:");
    }
}
void push(struct Node *top, int x)
{
    if(top!=NULL)
    printf("\nstack overflow");
    else{
     struct Node *n = (struct Node *)malloc(sizeof(struct Node));
     n->data=x;
     n->next=top;
     n=top;
     printf("\nElement %d pushed",x);
    }
}

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *top = NULL;
    //isEmpty(top);
    push(top,5);
    isEmpty(top);
    push(top,10);
    push(top,15);
    push(top,20);
    printf("\ntop : %d\n",top->data);
    linkedListTraversal(top);
    return 0;
}