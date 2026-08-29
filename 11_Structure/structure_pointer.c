#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s1 = {101, "Aryan", 85.5};

    struct Student *ptr;

    ptr = &s1;

    printf("Roll No: %d\n", ptr->rollNo);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}