#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    do
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != NULL);
}
void linkedListRevTraversal(struct Node *ptr)
{
    do
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->prev;
    } while (ptr != NULL);
}
// function of inserting at First of doubly linked list
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->prev = NULL;
    ptr->data = data;
    head = ptr;
    return head;
}
// function of inserting at the index of the list
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    //allocating memory to node in the heap
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    ptr->prev = p;
    p->next = ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    // Allocate memory for nodes in  the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    // link first and second nodes
    head->data = 5;
    head->next = second;
    head->prev = NULL;
    // link second and third nodes
    second->data = 10;
    second->next = third;
    second->prev = head;
    // terminating the linked list
    third->data = 20;
    third->next = NULL;
    third->prev = second;
    printf("Doubly Linked is :\n");
    linkedListTraversal(head);
    // printf("Backward Traversal :\n");
    // linkedListRevTraversal(third);
    //head = insertAtFirst(head, 50);
    head = insertAtIndex(head,54,2);
    printf("After insertion :\n");
    linkedListTraversal(head);
    // printf("Backward Traversal :\n");
    // linkedListRevTraversal(third);
    //linkedListTraversal(head);
    return 0;
}