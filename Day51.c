/*
DAY 51

Q101. Write a Program to take a sorted array (say nums[]) and an integer
(say target) as inputs. The elements in the sorted array might be repeated.

You need to print the first and last occurrence of the target and print the
index of first and last occurrence. Print -1, -1 if the target is not present.

Follow-up (optional): Can you do it in O(log n) Time Complexity?
*/

#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int first = -1, last = -1;
    int low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    /* Find first occurrence using Binary Search */
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    /* Find last occurrence using Binary Search */
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("\nFirst and Last Occurrence: %d, %d\n", first, last);

    return 0;
}