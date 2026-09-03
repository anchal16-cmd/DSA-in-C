#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("data.txt", "a");   // file open in append mode

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "This line is appended.\n");
    fprintf(fptr, "File handling is getting clearer now!\n");

    fclose(fptr);

    printf("Data appended successfully!\n");

    return 0;
}