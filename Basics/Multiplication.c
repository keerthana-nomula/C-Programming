#include <stdio.h>

// This program multiplies two numbers

int main()
{
    int a, b, product;

    // Read two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate the product
    product = a * b;

    // Display the result
    printf("Product = %d", product);

    return 0;
}