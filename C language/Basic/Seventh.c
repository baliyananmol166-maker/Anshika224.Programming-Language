//logical operator in c
#include <stdio.h>
int main() {
    _Bool a= 1;
    _Bool b= 0;
    printf("The value of a&&b is: %d\n", a&&b); //logical AND operator
    printf("The value of a||b is: %d\n", a||b); //logical OR operator
    printf("The value of !a is: %d\n", !a); //logical NOT operator
    return 0;
}