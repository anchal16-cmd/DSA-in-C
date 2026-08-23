#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void *)&a);
    printf("Value stored in p = %p\n", (void *)p);
    printf("Value using pointer = %d\n", *p);

    return 0;
}