#include <stdio.h>

int main()
{
    int a = 100;

    void *p;

    p = &a;

    printf("Value = %d\n", *(int *)p);

    int *q = NULL;

    if (q == NULL)
    {
        printf("q is a NULL pointer\n");
    }

    return 0;
}