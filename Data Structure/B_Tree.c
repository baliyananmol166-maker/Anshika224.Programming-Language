//implementation of B-Tree
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
struct BTreeNode {
    int keys[MAX];
    int count;
    struct BTreeNode *child[MAX + 1];
};
struct BTreeNode* createNode(int key) {
    struct BTreeNode *newNode =
        (struct BTreeNode*)malloc(sizeof(struct BTreeNode));
    newNode->keys[0] = key;
    newNode->count = 1;
    for(int i = 0; i <= MAX; i++)
        newNode->child[i] = NULL;
    return newNode;
}
void display(struct BTreeNode *root) {
    if(root) {
        int i;
        for(i = 0; i < root->count; i++) {
            display(root->child[i]);
            printf("%d ", root->keys[i]);
        }
        display(root->child[i]);
    }
}
int main() {
    struct BTreeNode *root = createNode(10);
    root->keys[1] = 20;
    root->keys[2] = 30;
    root->count = 3;
    printf("B-Tree Elements:\n");
    display(root);
    return 0;
}