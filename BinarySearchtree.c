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

int main() {
    struct node* root = NULL;
    
    // Construct a sample BST
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 6);
    root = insert(root, 1);
    root = insert(root, 4);

    // Insert a new node with key 7
    root = insert(root, 7);

    // Print the data of the node with key 7
    struct node* nodeWithKey7 = root->right->right;
    printf("Data of the node with key 7: %d\n", nodeWithKey7->data);

    // Don't forget to free the memory allocated for the BST nodes to prevent memory leaks
    // You can implement a function to free the entire tree recursively if needed.

    return 0;
}
