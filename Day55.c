/*
DAY 55

Q1. Write a program to take an integer array nums of size n,
and print the majority element.

The majority element is the element that appears strictly more
than [n / 2] times.

Print -1 if no such element exists.

Note:
Majority Element is not necessarily the element that is present
the most number of times.


Q2. Logic Enhancer / Follow-up:
Can you solve it in O(n) Time Complexity?
*/

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }


    /* ==========================================
       Q1: Normal Approach
       ========================================== */

    int majority = -1;

    for (i = 0; i < n; i++)
    {
        int count = 0;

        for (j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }

        if (count > n / 2)
        {
            majority = nums[i];
            break;
        }
    }

    printf("\nQ1 - Majority Element = %d\n", majority);


    /* ==========================================
       Q2: O(n) Approach
       Boyer-Moore Voting Algorithm
       ========================================== */

    int candidate = 0;
    int count = 0;

    /* Step 1: Find possible majority candidate */

    for (i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    /* Step 2: Check if candidate is actually majority */

    count = 0;

    for (i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        printf("Q2 - Majority Element = %d\n", candidate);
    }
    else
    {
        printf("Q2 - Majority Element = -1\n");
    }

    return 0;
}