#include <stdio.h>

int main() {

    // 1. Simple if statement
    int age = 20;

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    }


    // 2. if-else statement
    int number = 7;

    if (number % 2 == 0) {
        printf("Number is even.\n");
    } else {
        printf("Number is odd.\n");
    }


    // 3. if-else-if ladder
    int marks = 75;

    if (marks >= 90) {
        printf("Grade: A+\n");
    } else if (marks >= 80) {
        printf("Grade: A\n");
    } else if (marks >= 70) {
        printf("Grade: B\n");
    } else if (marks >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail\n");
    }


    // 4. Nested if
    int age2 = 20;
    int hasID = 1;

    if (age2 >= 18) {

        if (hasID == 1) {
            printf("You can enter.\n");
        } else {
            printf("You need an ID.\n");
        }

    } else {
        printf("You are not eligible to enter.\n");
    }


    // 5. switch statement
    int day = 3;

    switch (day) {

        case 1:
            printf("Monday\n");
            break;

        case 2:
            printf("Tuesday\n");
            break;

        case 3:
            printf("Wednesday\n");
            break;

        case 4:
            printf("Thursday\n");
            break;

        case 5:
            printf("Friday\n");
            break;

        default:
            printf("Invalid day.\n");
    }


    // 6. Conditional (Ternary) Operator
    int a = 10;
    int b = 20;

    int maximum = (a > b) ? a : b;

    printf("Maximum = %d\n", maximum);


    return 0;
}