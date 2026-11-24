/*
DAY 59

Q109:
Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.

Q110:
Write a program to take an integer array arr and an integer k as inputs.
The task is to find the maximum element in each subarray of size k
moving from left to right. Print the maximum elements for each window
separated by spaces as output.
*/

#include <stdio.h>

int main()
{
    int n, k, i, j;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    /* Q109 - Maximum sum of subarray of size k */

    int sum = 0, maxSum;

    for(i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    maxSum = sum;

    for(i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("\nQ109 - Maximum sum of subarray of size %d = %d\n", k, maxSum);


    /* Q110 - Maximum element in each subarray of size k */

    printf("Q110 - Maximum elements in each subarray: ");

    for(i = 0; i <= n - k; i++)
    {
        int max = arr[i];

        for(j = 1; j < k; j++)
        {
            if(arr[i + j] > max)
            {
                max = arr[i + j];
            }
        }

        printf("%d ", max);
    }

    printf("\n");

    return 0;
}