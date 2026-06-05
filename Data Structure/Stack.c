//implementation of stack
#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void push();
void pop();
void display();
int stack_array[MAX];
int top = -1;
int main(){
    int choice;
    while (1){
        printf("\n1. Push element to stack");
        printf("\n2. Pop element from stack");
        printf("\n3. Display all elements of stack");
        printf("\n4. Quit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                push();
                break;
            case 2:
                pop();
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
void push(){
    int add_item;
    if (top == MAX - 1){
        printf("\nStack Overflow");
    }
    else{
        printf("\nInsert the element in stack: ");
        scanf("%d", &add_item);
        top++;
        stack_array[top] = add_item;
    }
}
void pop(){
    if (top == -1){
        printf("\nStack Underflow");
    }
    else{
        printf("\nElement popped from stack is: %d", stack_array[top]);
        top--;
    }
}
void display(){
    if (top == -1){
        printf("\nStack is empty");
    }
    else{
        printf("\nStack elements are: ");
        for (int i = top; i >= 0; i--){
            printf("%d ", stack_array[i]);
        }
    }
}
