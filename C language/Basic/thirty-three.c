//static variable in C
#include <stdio.h>
int calc() {
    static int sum=0;
    sum++;
    return sum;
}
int main() {
    printf("%d \n", calc());
    printf("%d \n", calc());
    printf("%d \n", calc());
return 0;
}