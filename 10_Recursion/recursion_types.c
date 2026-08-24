#include <stdio.h>

// ---------- Direct Recursion ----------

void direct(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);

    // Function calls itself
    direct(n - 1);
}

// ---------- Indirect Recursion ----------

void B(int n);

void A(int n)
{
    if (n == 0)
        return;

    printf("A ");

    // A calls B
    B(n - 1);
}

void B(int n)
{
    if (n == 0)
        return;

    printf("B ");

    // B calls A
    A(n - 1);
}

// ---------- Main Function ----------

int main()
{
    // Direct Recursion
    printf("Direct Recursion: ");
    direct(5);

    printf("\n");

    // Indirect Recursion
    printf("Indirect Recursion: ");
    A(5);

    return 0;
}