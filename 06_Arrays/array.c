#include <stdio.h>

int main() {

    // 1. Array declaration and initialization
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("First element: %d\n", numbers[0]);
    printf("Third element: %d\n", numbers[2]);


    // 2. Taking array input
    int marks[5];

    printf("\nEnter 5 marks:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }


    // 3. Printing array using loop
    printf("\nMarks:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }

    printf("\n");


    // 4. Sum of array elements
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum = sum + marks[i];
    }

    printf("Sum = %d\n", sum);


    // 5. Finding largest element
    int largest = marks[0];

    for (int i = 1; i < 5; i++) {
        if (marks[i] > largest) {
            largest = marks[i];
        }
    }

    printf("Largest = %d\n", largest);


    // 6. Finding smallest element
    int smallest = marks[0];

    for (int i = 1; i < 5; i++) {
        if (marks[i] < smallest) {
            smallest = marks[i];
        }
    }

    printf("Smallest = %d\n", smallest);


    // 7. Searching an element
    int search;
    int found = 0;

    printf("\nEnter number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 5; i++) {
        if (marks[i] == search) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Number found.\n");
    } else {
        printf("Number not found.\n");
    }


    // 8. Even and odd elements
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 5; i++) {
        if (marks[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);


    // 9. Reverse array
    printf("\nReverse array:\n");

    for (int i = 4; i >= 0; i--) {
        printf("%d ", marks[i]);
    }

    printf("\n");


    return 0;
}
