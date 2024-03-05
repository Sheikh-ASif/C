#include <stdio.h>
#include <stdlib.h>

// Define the structure of a BST node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int key) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}
// Function to search for a key in the BST
struct TreeNode* search(struct TreeNode* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return search(root->left, key);
    }

    return search(root->right, key);
}

int main() {
    struct TreeNode* root = NULL;
    int keyToSearch;
    
    // Insert some elements into the BST
   struct TreeNode *p = createNode(50);
   struct TreeNode *p1 = createNode(60);
   struct TreeNode *p2 = createNode(70);
   struct TreeNode *p3 = createNode(80);
   struct TreeNode *p4 = createNode(90);
   
   p-> left = p1;
   p-> right = p2;
   p1-> left = p3;
   p1-> right = p4;
    printf("Enter the key to Search:");
    scanf("%d", &keyToSearch);

    struct TreeNode* result = search(root, keyToSearch);
    if (result) {
        printf("Key %d found in the BST.\n");
    } else {
        printf("Key %d not found in the BST.\n");
    }

    return 0;
}