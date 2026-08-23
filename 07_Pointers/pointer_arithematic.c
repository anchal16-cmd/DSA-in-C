#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *p;

    p = arr;

    printf("Value = %d\n", *p);

    p++;
    printf("After p++ = %d\n", *p);

    p++;
    printf("After p++ = %d\n", *p);

    p--;
    printf("After p-- = %d\n", *p);

    return 0;
}