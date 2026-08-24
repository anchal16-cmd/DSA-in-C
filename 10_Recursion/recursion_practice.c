#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    return base * power(base, exponent - 1);
}

// Function to find Fibonacci number using recursion
int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int base, exponent, n;

    // Taking input for power
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calling power function
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    // Taking input for Fibonacci series
    printf("\nEnter number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Printing Fibonacci series
    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}