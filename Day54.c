/*
DAY 54

Q1. Write a C program to take a positive integer n as input,
and find the pivot integer x such that the sum of all elements
between 1 and x inclusively equals the sum of all elements
between x and n inclusively.

Print the pivot integer x.
If no such integer exists, print -1.

Q2. Logic Enhancer:
Can you solve the same problem in O(1) Time Complexity?
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;
    int pivot = -1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    /* --------------------------------
       Q1: Normal Approach
       -------------------------------- */

    for (x = 1; x <= n; x++)
    {
        int leftSum = x * (x + 1) / 2;

        int totalSum = n * (n + 1) / 2;

        int rightSum = totalSum - (x * (x - 1) / 2);

        if (leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("\nQ1 - Pivot Integer = %d\n", pivot);


    /* --------------------------------
       Q2: O(1) Approach
       -------------------------------- */

    /*
       Sum from 1 to x = x(x+1)/2

       Sum from x to n =
       n(n+1)/2 - x(x-1)/2

       Equating both sides gives:

       x^2 = n(n+1)/2

       Therefore,

       x = sqrt(n(n+1)/2)
    */

    long long total = (long long)n * (n + 1) / 2;

    int root = (int)sqrt((double)total);

    if ((long long)root * root == total)
    {
        printf("Q2 - Pivot Integer = %d\n", root);
    }
    else
    {
        printf("Q2 - Pivot Integer = -1\n");
    }

    return 0;
}