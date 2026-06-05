//Inorder, preorder and postorder traversal 
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
void inorder(struct node*root) {
    if(root==NULL) return;
    inorder(root->left);
    printf("%d ->",root->data);
    inorder(root->right);
}
void preorder(struct node* root) {
    if(root==NULL) return;
    printf("%d ->", root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root) {
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ->", root->data);
}
struct node* createNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
int main() {
    struct node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    printf("Inorder Traversal: ");
    inorder(root);
    printf("\nPreorder Traversal: ");
    preorder(root);
    printf("\nPostorder Traversal: ");
    postorder(root);
    printf("\n");
    return 0;
}

