#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void LinkedListTraversal(struct Node * ptr){
    while(ptr != NULL){
        printf("Element:  %d\n",ptr->data);
        ptr = ptr->next;
    }
}
//Case1:
struct Node * DeletionAtFirst(struct Node * head){
    struct Node * ptr = head;
    head=head->next;
    free(ptr);
    return head;
}
//Case2:
struct Node * DeletionAtIndex(struct Node * head,int Index){
    struct Node* ptr = head;
    struct Node * p = head->next;
    for(int i = 0;i<Index-1;i++){
        p = p->next;
        ptr = ptr->next;
    }
    ptr->next =p->next;
    free(p);
    return head; 
}
//Case3:
struct Node * DeletionAtEnd(struct Node* head){
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next =NULL;
    free(q);
    return head;
}
struct Node* DeletionAtValue(struct Node * head,int value){
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->data !=value && q->next != NULL){
        p =p->next;
        q =q->next;
    }
if(q->data == value){
    p->next = q->next;
    free(q);
} 
 return head;   
}


int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* five;

     head=(struct Node *)malloc(sizeof(struct Node));
     second = (struct Node *)malloc(sizeof(struct Node));
     third = (struct Node *)malloc(sizeof(struct Node));
     fourth = (struct Node *)malloc(sizeof(struct Node));
     five =(struct Node *)malloc(sizeof(struct Node));

     head->data = 10;
     head->next = second;

     second->data = 12;
     second->next = third;

     third->data = 15;
     third->next = fourth;
     
     fourth->data = 24;
     fourth->next = five;

     five ->data = 34;
     five->next = NULL;
     printf("Linked List before deletion:\n");
     LinkedListTraversal(head);

     printf("Linked list after deletion\n");
     //head=DeletionAtFirst(head);
     //head = DeletionAtIndex(head,2);
     //head = DeletionAtEnd(head);
     head= DeletionAtValue(head,15);
     LinkedListTraversal(head);
 
    return 0;
}