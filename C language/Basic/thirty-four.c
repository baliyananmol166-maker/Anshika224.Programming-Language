//automatic variable in C
#include <stdio.h>
int main() {
    int a=10; //default storage class is auto
    auto int b=20; //explicitly declaring auto storage class
    printf("The value of a is: %d\n",a);
    printf("The value of b is: %d\n",b);
return 0;
}