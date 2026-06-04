//function with global variable in C
#include <stdio.h>
float pi=3.14; //global variable
int circle(int r) {
    return pi*r*r;
}
int main() {
    int x;
    printf("Enter the radius of the circle: ");
    scanf("%d", &x);
    printf("The area of the circle is: %d\n", circle(x));
return 0;
}