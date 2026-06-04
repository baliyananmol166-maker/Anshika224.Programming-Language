//Example of structure in C
//structure allocates space for each variable separately and has its own memory location
#include <stdio.h>
int main() {
    struct student {
        int roll_no;
        char name[50];
        float marks;
    };
    struct student s1;
    printf("Enter the roll_no, name and marks of the student: ");
    scanf("%d%s%f", &s1.roll_no, &s1.name, &s1.marks);
    printf("Information about the student:\n");
    printf("Roll No: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
return 0;
}