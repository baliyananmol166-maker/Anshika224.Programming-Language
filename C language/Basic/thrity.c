//example of pointer
#include <stdio.h>
int main() {
    int y=5;
    int *p;
    p=&y;  //pointer p is storing the address of variable y
    printf("The value of y is: %d\n",y); 
    printf("The content of p is:%d\n",*p); 
    printf("The address of y is: %p\n",&y);
    printf("The address stored in p is: %p\n",p);
return 0;
}