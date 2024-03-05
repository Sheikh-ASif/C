#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};


//this the function of traversal ony
void LinkedlistTraversal(struct Node* head){
    struct Node * ptr = head;
    printf("Elements is %d\n", ptr->data);
    ptr = ptr->next;
    while(ptr != head){
       printf("Elements is %d\n", ptr->data);
    ptr = ptr->next; 
    }
}


//this is the function of the insertion at the first 
struct Node* insertAtFirst(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = data;
    struct Node *p = head->next;

    while(p->next != head){
        p = p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head = ptr;
    return head;
}

int main(){
        struct Node* head;
        struct Node* second;
        struct Node* third;

        head = (struct Node*)malloc(sizeof(struct Node));
        second = (struct Node*)malloc(sizeof(struct Node));
        third = (struct Node*)malloc(sizeof(struct Node));

        head -> data = 7;
        head -> next = second;

        second -> data = 12;
        second -> next = third;

        third -> data = 10;
        third -> next = head;
         
        printf("Circular linked list before the insertion:\n");
        LinkedlistTraversal(head);
        head = insertAtFirst(head,74);
        head = insertAtFirst(head,83);
        head = insertAtFirst(head,26);
        head = insertAtFirst(head,714);
        printf("Circular linked list after the insertion:\n");
        LinkedlistTraversal(head);
        return 0;
}