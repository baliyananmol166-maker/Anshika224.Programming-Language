//Implementation of Dequeue using circular queue
#include <stdio.h>
int dq[100];
int front=-1, rear=-1;
#define size 5

void front_insert(int z) {
    if((front==0 && rear==size-1) || (front==rear+1)) {
        printf("\nDequeue is full and insertion is not possible");
    } 
    else if((front==-1) && (rear==-1)) {
        front = rear =0;
        dq[front]=z;
    }
    else if(front==0) {
        front = size-1;
        dq[front]=z;
    }
    else{
        front =front-1;
        dq[front]=z;
    }
}
void rear_insert(int z) {
    if((front==0 && rear==size-1) || (front==rear+1)) {
        printf("\nDequeue is full and insertion is not possible");
    }
    else if (front==-1 && rear==-1) {
        rear=0;
        dq[rear]=z;
    }
    else if(rear== size-1) {
        rear=0;
        dq[rear]=z;
    }
    else{
        rear++;
        dq[rear]=z;
    }
}
void front_dequeue() {
    if(front==-1 && rear==-1){
        printf("\nThere is no element to delete in this dequeue");
    }
    else if(front==rear) {
        printf("\nThe deleted element is %d", dq[front]);
        front=-1;
        rear=-1;
    }
    else if(front==size-1) {
        printf("\nThe deleted element is %d", dq[front]);
        front=0;
    }
    else{
        printf("\nThe deleted element is %d", dq[front]);
        front++;
    }
}
void dequeue_rear() {
    if(front==-1 && rear==-1) {
        printf("\nThere is no element to delete in this dequeue");
    }
    else if(front==rear) {
        printf("\nThe deleted element is %d", dq[rear]);
        front=-1;
        rear=-1;
    }
    else if(rear==0) {
        printf("\nThe deleted element is %d", dq[rear]);
        rear=size-1;
    }
    else{
        printf("\nThe deleted element is %d", dq[rear]);
        rear=rear-1;
    }
}
void display() {
    int i= front;
    printf("\nElements in the dequeue are: ");
    while(i!=rear) {
        printf("%d ", dq[i]);
        i=(i+1)%size;
    }
    printf("%d", dq[rear]);
}
int main() {
    front_insert(-5) ;
    front_insert(23);
    rear_insert(17);
    rear_insert(12);
    rear_insert(47);
    display();
    front_dequeue();
    dequeue_rear();
    display();
    return 0;
}