/*
DAY 58

Q1. Write a program to take an integer array nums.
Print an array answer such that answer[i] is equal to the product
of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit
in a 32-bit integer.


Q2. Follow-up (Optional):
Write a code that runs in O(n) time and without using the
division operation.
*/


#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    int answer[n];

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }


    /* Q1: Brute Force Approach - O(n^2) */

    printf("\nQ1 Output: ");

    for (i = 0; i < n; i++)
    {
        int product = 1;

        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                product = product * nums[j];
            }
        }

        printf("%d", product);

        if (i < n - 1)
            printf(", ");
    }


    /* Q2: Optimized Approach - O(n)
       Without using division */

    int prefix = 1;
    int suffix = 1;

    for (i = 0; i < n; i++)
    {
        answer[i] = prefix;
        prefix = prefix * nums[i];
    }

    for (i = n - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * suffix;
        suffix = suffix * nums[i];
    }

    printf("\nQ2 Output: ");

    for (i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if (i < n - 1)
            printf(", ");
    }

    printf("\n");

    return 0;
}