#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3] = {
        {101, "Aryan", 85.5},
        {102, "Rahul", 78.0},
        {103, "Aman", 91.5}
    };

    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", s[i].rollNo);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}