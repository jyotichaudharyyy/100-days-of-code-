/*
DAY 57

Q1. Write a program to take an array arr[] of integers as input.
The task is to find the Previous Greater Element for each element of
the array in order of their appearance in the array.

Previous Greater Element of an element in the array is the nearest
element on the left which is greater than the current element.

If there does not exist a previous greater element for the current
element, then the previous greater element is -1.

Print the output for each element in a comma-separated fashion.
Use brute force approach (nested loop) to solve.


Q2. Follow-up (Optional):
Can you solve the same Previous Greater Element problem in O(n)
time complexity using a stack?
*/


#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    /* Q1: Brute Force Approach - O(n^2) */

    printf("\nQ1 Output: ");

    for (i = 0; i < n; i++)
    {
        int previousGreater = -1;

        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                previousGreater = arr[j];
                break;
            }
        }

        printf("%d", previousGreater);

        if (i < n - 1)
            printf(", ");
    }


    /* Q2: Optimized Stack Approach - O(n) */

    int stack[n];
    int result[n];
    int top = -1;

    for (i = 0; i < n; i++)
    {
        while (top >= 0 && stack[top] <= arr[i])
        {
            top--;
        }

        if (top == -1)
        {
            result[i] = -1;
        }
        else
        {
            result[i] = stack[top];
        }

        stack[++top] = arr[i];
    }

    printf("\nQ2 Output: ");

    for (i = 0; i < n; i++)
    {
        printf("%d", result[i]);

        if (i < n - 1)
            printf(", ");
    }

    printf("\n");

    return 0;
}