#include <stdio.h>

// This program divides two numbers

int main()
{
    float a, b, result;

    // Read two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // Calculate the division
    result = a / b;

    // Display the result
    printf("Result = %.2f", result);

    return 0;
}