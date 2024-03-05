#include<stdio.h>
#include<stdlib.h>

//Single Linkedlist

struct Node{
    int data;
    struct Node* next;
    };

    void LinkedListTraversal(struct Node *ptr){
        while (ptr != NULL){
            printf("Elements:%d\n", ptr -> data);
            ptr = ptr -> next;
        }     
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
        third -> next = NULL;

        LinkedListTraversal(head);

        return 0;
    }
