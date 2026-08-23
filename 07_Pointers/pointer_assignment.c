#include <stdio.h>

int main()
{
    int a = 20;

    int *p1;
    int *p2;

    p1 = &a;
    p2 = p1;

    printf("Value of a = %d\n", a);
    printf("Value using p1 = %d\n", *p1);
    printf("Value using p2 = %d\n", *p2);

    return 0;
}