//dynamic initialization of array in C
#include <stdio.h>
int main() {
    int a[10];
    //array is created with garbage value.
    for(int i=0; i<10; i++) {
        scanf("%d ", &a[i]);
    }
    printf("The elements of the array are: ");
    for(int i=0; i<10; i++) {
        printf("%d ",a[i]);
    }
return 0;
}