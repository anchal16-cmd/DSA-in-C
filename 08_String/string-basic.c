#include <stdio.h>
#include <string.h>

int main()
{
    // 1. Declare and print a string
    char name[50] = "priya";

    printf("Name = %s\n", name);


    // 2. Take string input
    char city[50];

    printf("Enter your city: ");
    scanf("%s", city);

    printf("City = %s\n", city);


    // 3. strlen() - find length
    printf("Length of name = %zu\n", strlen(name));


    // 4. strcpy() - copy string
    char copy[50];

    strcpy(copy, name);

    printf("Copied string = %s\n", copy);


    // 5. strcat() - join two strings
    char first[50] = "priya ";
    char last[50] = "ojha";

    strcat(first, last);

    printf("Full name = %s\n", first);


    // 6. strcmp() - compare two strings
    char name1[50] = "priya";
    char name2[50] = "priya";

    if (strcmp(name1, name2) == 0)
    {
        printf("Both strings are same\n");
    }
    else
    {
        printf("Strings are different\n");
    }

    return 0;
}