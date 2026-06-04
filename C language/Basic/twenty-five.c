//4.strcmp() function is used to compare two strings in C
#include <stdio.h>
#include <string.h>
int main() {
    char str1[10];
    char str2[10];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("The result of string comparison is: %d\n", strcmp(str1, str2));
return 0;
}