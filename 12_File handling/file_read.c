#include <stdio.h>

int main()
{
    FILE *fptr;
    char line[200];

    fptr = fopen("data.txt", "r");   // file open in read mode

    if (fptr == NULL)
    {
        printf("Error opening file! File may not exist.\n");
        return 1;
    }

    printf("Reading data from file:\n\n");

    // Read line by line until end of file
    while (fgets(line, sizeof(line), fptr) != NULL)
    {
        printf("%s", line);
    }

    fclose(fptr);

    return 0;
}