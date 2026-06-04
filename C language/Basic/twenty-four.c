//3.strcat() function is used to concatenate two strings in C
#include <stdio.h>
#include <string.h>
int main() {
    char str1[10]="Hello";
    char str2[10]=" World!.";
    printf("The concatenated string is: %s\n", strcat(str1, str2));
return 0;
}