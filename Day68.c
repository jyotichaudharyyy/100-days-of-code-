/*
DAY 68

Q118:
Write a program to take an input array of size n.
The array should contain all the integers between 0 to n except for one.
Print that missing number.
*/

#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0, expectedSum, missingNumber;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    /* Sum of numbers from 0 to n */
    expectedSum = n * (n + 1) / 2;

    /* Find the missing number */
    missingNumber = expectedSum - sum;

    printf("Missing number = %d\n", missingNumber);

    return 0;
}