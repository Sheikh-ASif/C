#include <stdio.h>
#include <stdlib.h>

// Single Linkedlist

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

// This is the function for the insertion at the begining in which we required a head and data that we wanted to insert in the linkedlist
struct Node *inserAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;

    return ptr;
}
// This is the function for the insertion in between the linkedlist in which required things are the data ,index and head
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
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

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 10;
    third->next = NULL;
    
    printf("Linkedlist before the insertion:\n");
    LinkedListTraversal(head);
    // head = inserAtFirst(head,55);
    head = insertAtIndex(head, 55, 2);
    printf("Linkedlist after the insertion:\n");
    LinkedListTraversal(head);

    return 0;
}
