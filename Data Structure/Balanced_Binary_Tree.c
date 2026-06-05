//implementation of balanced binary tree
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// Display elements (Preorder)
void display(struct node* root) {
    if (root == NULL)
        return;
    printf("%d ", root->data);
    display(root->left);
    display(root->right);
}
int main() {
    // Creating a Balanced Binary Tree
    struct node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(2);
    root->left->right = createNode(7);
    root->right->left = createNode(12);
    root->right->right = createNode(20);
    printf("Elements of Balanced Binary Tree:\n");
    display(root);
    return 0;
}