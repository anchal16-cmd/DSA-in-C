#include <stdio.h>

int main() {
    int a = 20;
    int b = 5;

    // Arithmetic Operators
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    // Relational Operators
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operators
    printf("(a > 5 && b < 5): %d\n", a > 5 && b < 5);
    printf("(a > 5 || b > 5): %d\n", a > 5 || b > 5);
    printf("!(a > b): %d\n", !(a > b));

    // Assignment Operators
    int x = 10;

    x += 5;
    printf("x += 5: %d\n", x);

    x -= 3;
    printf("x -= 3: %d\n", x);

    x *= 2;
    printf("x *= 2: %d\n", x);

    x /= 4;
    printf("x /= 4: %d\n", x);

    return 0;
}