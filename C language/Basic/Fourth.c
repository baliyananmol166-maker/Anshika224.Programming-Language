//input and output function in C are print() and scanf()
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a); //taking input from user
    printf("The value of a is: %d\n",a); // printing the value of a
    return 0;
}