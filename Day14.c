
Q27: Write a program to print the sum of the first n odd numbers.

Q28: Write a program to print the product of even numbers
from 1 to n.

#include <stdio.h>

int main()
{
    // Q27
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (2 * i - 1);
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    // Q28
    int limit;
    long long product = 1;

    printf("\nEnter the value of n: ");
    scanf("%d", &limit);

    for (i = 2; i <= limit; i += 2)
    {
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", limit, product);

    return 0;
}