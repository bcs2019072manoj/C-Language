#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int num;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->num);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *start;
    struct Node *second;
    struct Node *third;
    // Allocate memory for nodes in  the linked list in heap
    start = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    // link first and second nodes
    start->num=5;
    start->next = second;
    // link second and third nodes
    second->num = 10;
    second->next = third;
    // terminating the linked list
    third->num = 20;
    third->next = NULL;
    linkedListTraversal(start);

    return 0;
}