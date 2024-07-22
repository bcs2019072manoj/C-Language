#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// function of inserting the element  at the beggining of the list
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    head=ptr;
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
    p->next = ptr;
    return head;
}
// function of inserting at the end of the list
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
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
    // link second and third nodes
    second->data = 10;
    second->next = third;
    // terminating the linked list
    third->data = 20;
    third->next = NULL;
    printf("Before insertion:\n");
    linkedListTraversal(head);
    head=insertAtFirst(head,34);
    // head=insertAtIndex(head,34,1);
    //head = insertAtEnd(head, 34);
    printf("After insertion:\n");
    linkedListTraversal(head);
    return 0;
}