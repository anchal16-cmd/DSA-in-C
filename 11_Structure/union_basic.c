#include <stdio.h>

union Data {
    int number;
    float marks;
    char grade;
};

int main() {
    union Data d;

    d.number = 100;

    printf("Number: %d\n", d.number);

    d.marks = 85.5;

    printf("Marks: %.2f\n", d.marks);

    d.grade = 'A';

    printf("Grade: %c\n", d.grade);

    return 0;
}