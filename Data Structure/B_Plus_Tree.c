//Implementation of B-Plus tree
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insert(int value) {
    struct Node *newNode =
        (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL) {
        head = newNode;
        return;
    }
    struct Node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}
void display() {
    struct Node *temp = head;
    printf("Leaf Nodes: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display();
    return 0;
}