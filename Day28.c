/*
DAY 28

Question 1:
Write a program to print all the prime numbers from 1 to n.

Question 2:
Read and print elements of a one-dimensional array.
*/

#include <stdio.h>

int main()
{
    int n, i, j, isPrime;

    // Question 1
    printf("Question 1:\n");
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++)
    {
        isPrime = 1;

        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    printf("\n\n");

    // Question 2
    int size, arr[100];

    printf("Question 2:\n");
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}