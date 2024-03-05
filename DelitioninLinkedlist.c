#include <stdio.h>
#include <stdlib.h>

// Single Linkedlist

struct Node
{
    int data;
    struct Node *next;
};

//this is the function of traversal
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

//thiss is the function of delete the first node from the linkedlist
    struct Node * deleteFirst(struct Node* head){
        struct Node* ptr = head;
        head = head -> next;
        free(ptr);
        return head;

    }

//this is the function of the delete node from the particular places by using indexces
//struct Node * deleteAtIndex(struct Node* head, int index){
   // struct node* p = head;
    //struct node* q = head -> next;
    //for(int i = 0; i<index-1; i++){
      //  p = p -> next;
        //q = q -> next;
    //}
    //p -> next = q -> next;
    //free(q);
    //return(head);
//} 
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
       
        printf("linkedlist before the deletion:\n");
        LinkedListTraversal(head);
        head = deleteFirst(head);
        //head = deleteAtIndex(head,2);
        printf("Linkedlist afetr deletion:\n");
        LinkedListTraversal(head);

        return 0;
    }
