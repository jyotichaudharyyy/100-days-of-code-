/*
DAY 86

Q136 (Enum):
Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY)
and perform operations using switch.
*/

#include <stdio.h>

enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Menu choice;
    int option;
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\nMenu:\n");
    printf("1 - ADD\n");
    printf("2 - SUBTRACT\n");
    printf("3 - MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &option);

    choice = option;

    switch(choice)
    {
        case ADD:
            printf("Result = %.2f\n", num1 + num2);
            break;

        case SUBTRACT:
            printf("Result = %.2f\n", num1 - num2);
            break;

        case MULTIPLY:
            printf("Result = %.2f\n", num1 * num2);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}