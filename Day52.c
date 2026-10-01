/*
DAY 52

Q102. Write a Program to take a sorted array arr[] and an integer x as input,
find the index (0-based) of the smallest element in arr[] that is greater than
or equal to x and print it. This element is called the ceil of x.

If such an element does not exist, print -1.

Note: In case of multiple occurrences of ceil of x, return the index of the
first occurrence.

Follow-up (optional): Can you do it in O(log n) Time Complexity?
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, x;
    int low, high, mid;
    int result = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    /* Binary Search to find ceil of x */
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] >= x)
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("\nIndex of ceil of %d: %d\n", x, result);

    return 0;
}