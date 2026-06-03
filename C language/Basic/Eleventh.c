//if-else statement in c using user input value 
#include <stdio.h>
int main() {
    int x;
    int y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    if(x>y) {
        printf("x is greater than y\n");
    }
    else {
        printf("y is greater than x\n");
    }
return 0;
}