#include <stdio.h>
#include <stdlib.h>

// Define the structure of a BST node
struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Function to create a new node
struct node* createNode(int key) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = key;
    n->left = n->right = NULL;
    return n;
}

// Function to insert a key into the BST
struct node* insert(struct node* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }

    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    }

    return root;
}

// Function to print all the elements of the BST
void inorderTraversal(struct node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
   }
}

int main() {
    struct node* root = NULL;
    
    // Construct a sample BST
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 6);
    root = insert(root, 1);
    root = insert(root, 4);

    // Print all the elements of the BST before insertion
    printf("Elements of the BST before insertion: ");
    inorderTraversal(root);
   printf("\n");

    // Insert a new node
    root = insert(root,9);
    //root = insert(root,10);

    // Print all the elements of the BST after insertion
    printf("Elements of the BST after insertion: ");
    inorderTraversal(root);
    printf("\n");

    // Print the data of the node with key 
    struct node* nodeWithKey9 = root->right->right;
    printf("Data of the node with key 9: %d\n", nodeWithKey9->data);

    //struct node* nodeWithKey10 = root->right->right;
    //printf("Data of the node with key 10: %d\n", nodeWithKey10->data);

    return 0;
}