//example of goto statement in C
#include <stdio.h>
int main() {
    int i=1;
    start: // label
    printf("%d ",i);
    i++;
    if(i<=10) {
        goto start; // jump to label
    }
return 0;
}