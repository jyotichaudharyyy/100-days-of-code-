
Q25: Write a program to implement a basic calculator using
switch-case for +, -, *, /, %.

Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main()
{
    // Q25
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator)
    {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", (float)num1 / num2);
            else
                printf("Division by zero is not possible.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result = %d\n", num1 % num2);
            else
                printf("Modulo by zero is not possible.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    // Q26
    int n, i;

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}