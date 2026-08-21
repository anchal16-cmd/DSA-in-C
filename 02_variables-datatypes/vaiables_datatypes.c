#include<stdio.h>

int main()
{
    int product_id = 101;
    float price = 499.50;
    float discount = 10.5;
    char category = 'A';

    // %d means: print an integer value.
// product_id is the variable whose value will be printed.
printf("Product ID: %d\n", product_id);


// %.2f means: print a floating-point value with 2 digits after the decimal point.
// price is the variable whose value will be printed.
printf("Price: %.2f\n", price);


// %.2f means: print the discount value with 2 digits after the decimal point.
// %% is used to print the actual '%' symbol.
// discount is the variable whose value will be printed.
printf("Discount: %.2f%%\n", discount);


// %c means: print a single character.
// category is the variable whose character will be printed.
printf("Category: %c\n", category);

    return 0;
}
