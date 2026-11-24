/*
DAY 62

Q112:
Write a program to take an integer array arr as input.
The task is to find the maximum sum of any contiguous subarray
using Kadane's algorithm. Print the maximum sum as output.
If all elements are negative, print the largest (least negative) element.
*/

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int currentSum = arr[0];
    int maxSum = arr[0];

    for(i = 1; i < n; i++)
    {
        if(currentSum + arr[i] > arr[i])
        {
            currentSum = currentSum + arr[i];
        }
        else
        {
            currentSum = arr[i];
        }

        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("Maximum sum of contiguous subarray = %d\n", maxSum);

    return 0;
}
