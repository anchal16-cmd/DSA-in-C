#include <stdio.h>

int main() {

    int i, n, sum;

    // for loop
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // while loop
    i = 1;

    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // do-while loop
    i = 1;

    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n");

    // Print numbers from 1-10
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    printf("\n");

    // Sum of 1-N
    sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);
    printf("\n");

    // Multiplication table
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}