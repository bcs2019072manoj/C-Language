#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
// function of inserting at First of the circular list
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    do
    {
        p = p->next;
    } while (p->next != head);
    p->next = ptr;
    ptr->next = head;
    return head;
}
// function of inserting at the index of the circular list
struct Node *insertAtIndex(struct Node *head, int index, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// function of inserting at the last of the circular linked list
struct Node *insertAtLast(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    do{
     p=p->next;
    }while(p->next!=head);
    p->next = ptr;
    ptr->next = head;
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
    // link second and third nodes
    second->data = 10;
    second->next = third;
    // terminating the linked list
    third->data = 20;
    third->next = head;
    printf("Before insertion:\n");
    linkedListTraversal(head);
    printf("After insertion:\n");
    // head=insertAtFirst(head,30);
    head = insertAtIndex(head, 2, 40);
    head = insertAtLast(head, 25);
    linkedListTraversal(head);
    return 0;
}