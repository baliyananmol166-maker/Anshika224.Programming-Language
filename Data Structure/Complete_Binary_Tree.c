//Implementation of complete binary tree
#include <stdio.h>
#define MAX 100
int tree[MAX];
int n = 0;
void insert(int value) {
    tree[n] = value;
    n++;
}
void display() {
    int i;
    if (n == 0) {
        printf("Tree is empty\n");
        return;
    }
    printf("Elements of Complete Binary Tree:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tree[i]);
    }
    printf("\n");
}
int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);
    display();
    return 0;
}