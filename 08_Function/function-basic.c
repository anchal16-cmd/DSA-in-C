#include <stdio.h>

// Function declaration (prototype)
void greet();
int add(int a, int b);

int main()
{
    int result;

    // Calling greet() function
    greet();

    // Calling add() function and storing its return value
    result = add(10, 20);

    printf("Sum = %d\n", result);

    return 0;
}

// Function definition
void greet()
{
    printf("Hello Aanchal!\n");
}

// Function definition with return type
int add(int a, int b)
{
    int sum;

    sum = a + b;

    return sum;
}