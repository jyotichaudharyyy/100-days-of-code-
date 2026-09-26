
Q11: Write a program to input an integer and check whether it is even or odd using if-else.

Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if-else.

#include <stdio.h>

int main()
{
    // Q11
    int num1;

    printf("Enter an integer: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
        printf("%d is Even.\n", num1);
    else
        printf("%d is Odd.\n", num1);

    // Q12
    int num2;

    printf("\nEnter another integer: ");
    scanf("%d", &num2);

    if (num2 >= 0)
    {
        if (num2 == 0)
            printf("The number is Zero.\n");
        else
            printf("%d is Positive.\n", num2);
    }
    else
    {
        printf("%d is Negative.\n", num2);
    }

    return 0;
}