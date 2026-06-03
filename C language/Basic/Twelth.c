//nested if-else statement in C
#include <stdio.h>
int main() {
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if(age<18) {
        printf("You are minor.\n");
        if(age<13) {
            printf("Also,You are a child.\n");
        }
        else {
            printf("Also, You are a teenager.\n");
        }
    }
    else {
        printf("You are an adult.\n");
    }
return 0;
}