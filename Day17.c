
Q33: Write a program to check if a number is an Armstrong number.

Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main()
{
    // Q33
    int num, original, remainder, sum = 0;

    printf("Enter a number to check Armstrong number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong Number.\n", original);
    else
        printf("%d is not an Armstrong Number.\n", original);

    // Q34
    int n, i, isPrime = 1;

    printf("\nEnter a number to check prime: ");
    scanf("%d", &n);

    if (n <= 1)
        isPrime = 0;
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is not a Prime Number.\n", n);

    return 0;
}