#include <stdio.h>


// ========================================
// 1. CALL BY VALUE
// ========================================

void changeValue(int a)
{
    a = 20;
}


// ========================================
// 2. CALL BY REFERENCE
// ========================================

void changeReference(int *a)
{
    *a = 20;
}


// ========================================
// 3. SWAP BY VALUE
// ========================================

void swapByValue(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}


// ========================================
// 4. SWAP BY REFERENCE
// ========================================

void swapByReference(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


// ========================================
// MAIN FUNCTION
// ========================================

int main()
{
    int x;
    int y;


    // ========================================
    // 1. CALL BY VALUE
    // ========================================

    x = 10;

    printf("\n--- CALL BY VALUE ---\n");

    printf("Before: x = %d\n", x);

    changeValue(x);

    printf("After: x = %d\n", x);


    // ========================================
    // 2. CALL BY REFERENCE
    // ========================================

    x = 10;

    printf("\n--- CALL BY REFERENCE ---\n");

    printf("Before: x = %d\n", x);

    changeReference(&x);

    printf("After: x = %d\n", x);


    // ========================================
    // 3. SWAP BY VALUE
    // ========================================

    x = 10;
    y = 20;

    printf("\n--- SWAP BY VALUE ---\n");

    printf("Before: x = %d, y = %d\n", x, y);

    swapByValue(x, y);

    printf("After: x = %d, y = %d\n", x, y);


    // ========================================
    // 4. SWAP BY REFERENCE
    // ========================================

    x = 10;
    y = 20;

    printf("\n--- SWAP BY REFERENCE ---\n");

    printf("Before: x = %d, y = %d\n", x, y);

    swapByReference(&x, &y);

    printf("After: x = %d, y = %d\n", x, y);


    return 0;
}