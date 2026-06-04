//C pointer to pointer
#include <stdio.h>
int main() {
    int a=10;
    int *p; // pointer to int
    int **pp; // pointer to pointer to int
    p=&a; // p holds the address of a
    pp=&p; // pp holds the address of p
    printf("Value of a: %d\n",a);
    printf("Value of a using pointer p: %d\n",*p);
    printf("Value of a using pointer to pointer pp: %d\n",**pp);
return 0;
}