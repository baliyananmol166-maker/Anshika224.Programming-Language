//2.strcpy function in C
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100];
    char str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("The second string is: %s\n", strcpy(str2, str1));
return 0;
}