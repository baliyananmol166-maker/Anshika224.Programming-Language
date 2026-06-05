//implementation of degenerate binary tree or skewed binary tree
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
void display(struct node* root) {
    if (root == NULL)
        return;
    printf("%d ", root->data);
    display(root->right);   // Right-skewed tree
}
int main() {
    // Creating a Degenerate (Right-Skewed) Binary Tree
    struct node* root = createNode(10);
    root->right = createNode(20);
    root->right->right = createNode(30);
    root->right->right->right = createNode(40);
    printf("Elements of Degenerate Binary Tree:\n");
    display(root);
    return 0;
}