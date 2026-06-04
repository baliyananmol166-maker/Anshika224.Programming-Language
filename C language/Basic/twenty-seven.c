//6.strupr() function is used to convert a string to uppercase in C
#include <stdio.h>
#include <string.h>
int main() {
    char str[100]="hello world!";
    printf("The uppercase string is: %s\n", strupr(str));
return 0;
}