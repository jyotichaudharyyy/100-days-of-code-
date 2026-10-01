/*
DAY 53

Q103. Write a Program to take an array of integers as input, calculate the
pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to
the left of the index is equal to the sum of all the numbers strictly to
the index's right.

If the index is on the left edge of the array, then the left sum is 0
because there are no elements to the left. This also applies to the right
edge of the array.

Print the leftmost pivot index.
If no such index exists, print -1.

Follow-up (optional): Try to solve this in O(n) Time Complexity.
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int totalSum = 0;
    int leftSum = 0;
    int pivotIndex = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    /* Find the leftmost pivot index */
    for (i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
        {
            pivotIndex = i;
            break;
        }

        leftSum += arr[i];
    }

    printf("\nPivot Index: %d\n", pivotIndex);

    return 0;
}