#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void insert();
void deleteElement();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;
int main(){
    int choice;
    while (1){
        printf("\n1. Insert element to queue");
        printf("\n2. Delete element from queue");
        printf("\n3. Display all elements of queue");
        printf("\n4. Quit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                insert();
                break;
            case 2:
                deleteElement();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong choice");
        }
    }
    return 0;
}
void insert(){
    int add_item;
    if (rear == MAX - 1){
        printf("\nQueue Overflow");
    }
    else{
        if (front == -1)
            front = 0;
        printf("\nInsert the element in queue: ");
        scanf("%d", &add_item);
        rear++;
        queue_array[rear] = add_item;
    }
}
void deleteElement(){
    if (front == -1 || front > rear){
        printf("\nQueue Underflow");
        return;
    }
    printf("\nElement deleted from queue is: %d", queue_array[front]);
    front++;
    if (front > rear){
        front = -1;
        rear = -1;
    }
}
void display(){
    int i;
    if (front == -1){
        printf("\nQueue is empty");
    }
    else{
        printf("\nQueue elements are: ");
        for (i = front; i <= rear; i++){
            printf("%d ", queue_array[i]);
        }
    }
}