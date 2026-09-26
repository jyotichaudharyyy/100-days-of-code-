
Q35: Write a program to print all prime numbers from 1 to n.

Q36: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main()
{
    // Q35
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++)
    {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    // Q36
    int num, temp, digit, sum = 0;

    printf("\n\nEnter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}