#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *Left;
    struct node *Right;
};
struct node *createnode(int data){
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    n ->data = data;
    n ->Left = NULL;
    n ->Right = NULL;
    return n;
}
void postOrder(struct node *root){
    if(root != NULL){
        postOrder(root->Left);
        postOrder(root->Right);
        printf("%d",root->data);
    }
}
void preOrder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);  
        preOrder(root->Left);
        preOrder(root->Right);
    }
}
void inOrder(struct node *root){
    if(root != NULL){
        inOrder(root->Left);
        printf("%d",root->data);
        inOrder(root->Right);
    }
}
int main(){
    struct node *p = createnode(0);
    struct node *p1 = createnode(2);
    struct node *p2 = createnode(4);
    struct node *p3 = createnode(7);
    struct node *p4 = createnode(1);

    p->Left = p1;
    p->Right = p2;
    p1->Left = p3;
    p1->Right = p4;

    printf("The post order of the numbers is:\n");
    postOrder(p);
    
    printf("The in order of the numbers is:\n");
    inOrder(p);
    
    printf("The pre order of the numbers is:\n");
    preOrder(p);

    return 0;
}

