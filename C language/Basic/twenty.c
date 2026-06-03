//use more than one function in same program
#include <stdio.h>
int sum(int x, int y) {
    return x+y;
}
int mul(int x, int y) {
    return x*y;
}
void main() {
    printf("The addition of two number is: %d\n", sum(45, 67));
    printf("The multiplication of two number is: %d\n", mul(20, 100));
}