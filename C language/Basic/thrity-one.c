//example of enum in c
#include <stdio.h>
int main() {
    enum week {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum week today= Wednesday;
    printf("The value of today is: %d\n",today);
return 0;
}