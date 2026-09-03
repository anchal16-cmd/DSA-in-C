#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("data.txt", "w");   // file open in write mode

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "Hello, this is my first file handling program.\n");
    fprintf(fptr, "Learning DSA in C - Day 8\n");

    fclose(fptr);   // file close karna zaroori hai

    printf("Data written to file successfully!\n");

    return 0;
}