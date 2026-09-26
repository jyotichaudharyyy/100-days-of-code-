// Write a program to convert temperature from Celsius to Fahrenheit.
// Write a program to swap two numbers using a third variable. 
#include <stdio.h>

int main()
{
    // =========================
    // Q5: Celsius to Fahrenheit
    // =========================

    float celsius, fahrenheit;

    printf("Q5: Celsius to Fahrenheit\n");

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);


    // =========================
    // Q6: Swap Two Numbers
    // =========================

    int num1, num2, temp;

    printf("\nQ6: Swap Two Numbers Using a Third Variable\n");

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    // Swapping using third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}