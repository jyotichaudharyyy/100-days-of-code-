Q7: Write a program to swap two numbers without using a third variable.
Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main()
{
    // ==========================================
    // Q7: Swap without using a third variable
    // ==========================================

    int num1, num2;

    printf("Q7: Swap Two Numbers Without a Third Variable\n");

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    // Swapping without using a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nAfter swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);


    // ==========================================
    // Q8: Sum of first n natural numbers
    // ==========================================

    int n, sum;

    printf("\n----------------------------------------\n");
    printf("Q8: Sum of First n Natural Numbers\n");

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Formula: Sum = n * (n + 1) / 2
    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}