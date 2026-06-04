//example of union in C
//union allocates space for the largest member and all members share the same memory location
#include <stdio.h>
int main() {
    union data {
        int i;
        char name[20];
        float f;
    };
    union data d1;
    d1.i=10;
    printf("The value of i is: %d\n", d1.i);
    d1.f=3.14;
    printf("The value of f is: %f\n", d1.f);
    d1.name[0]='A';
    printf("The value of name is: %s\n", d1.name);
    printf("The value of i is: %d\n", d1.i); //the value of i is overwritten by the value of f
return 0;
}