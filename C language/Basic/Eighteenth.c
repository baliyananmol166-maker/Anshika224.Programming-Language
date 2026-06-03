//function in C
#include <stdio.h>
int mult(int a , int b) {
    return a*b;
}
void main() {
    int x;
    int y;
    printf("Enter the first number: \n");
    scanf("%d", &x);
    printf("Enter the second number: \n");
    scanf("%d", &y);
    printf("The multiplication of x and y is: %d\n", mult(x,y));
}