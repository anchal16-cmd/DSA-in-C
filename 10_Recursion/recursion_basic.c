#include <stdio.h>

// Function to find factorial using recursion
int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

// Function to find sum of N natural numbers using recursion
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Calling factorial function
    printf("Factorial of %d = %d\n", n, factorial(n));

    // Calling sum function
    printf("Sum of first %d natural numbers = %d\n", n, sum(n));

    return 0;
}