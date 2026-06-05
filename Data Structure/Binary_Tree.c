//Implementation of binary tree 
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
int main() {
    struct node* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(60);
    root->right->right = createNode(70);
    printf("Elements in Binary Tree:\n");
    printf("%d\n", root->data);
    printf("%d %d\n", root->left->data, root->right->data);
    printf("%d %d %d %d\n",
           root->left->left->data,
           root->left->right->data,
           root->right->left->data,
           root->right->right->data);
    return 0;
}