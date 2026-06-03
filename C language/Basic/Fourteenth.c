//while loop in c
#include <stdio.h>
int main() {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    while(x>0) {
        //printing the number in decreasing order.
        printf("%d.\n",x);
        x--;
    }
return 0;
}