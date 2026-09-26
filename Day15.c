
Q29: Write a program to calculate the factorial of a number.

Q30: Write a program to reverse a given number.

#include <stdio.h>

int main()
{
    // Q29
    int n, i;
    long long factorial = 1;

    printf("Enter a number to find factorial: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %lld\n", n, factorial);
    }

    // Q30
    int num, original, remainder, reverse = 0;

    printf("\nEnter a number to reverse: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    printf("Reverse of %d = %d\n", original, reverse);

    return 0;
}