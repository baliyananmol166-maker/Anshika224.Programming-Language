//string function are accessible by importing string.h header file in C
//1.strlen() function is used to find the length of the string.
#include <stdio.h>
#include <string.h>
int main() {
    char str1[10];
    char str2[10];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("The length of the first string is: %d\n", strlen(str1));
    printf("The length of the second string is: %d\n", strlen(str2));
return 0;
}