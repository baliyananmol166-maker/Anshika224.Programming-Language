//C pointer to function
#include <stdio.h>
void display() {
    printf("Hello, I am a function pointer.\n");
}
int main() {
    void (*funcPtr)() = display; // function pointer
    funcPtr(); // calling the function using pointer
return 0;
}