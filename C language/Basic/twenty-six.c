//5.strlwr() function is used to convert a  string to lowercase in C
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("The lowercase string is: %s\n", strlwr(str));
return 0;
}