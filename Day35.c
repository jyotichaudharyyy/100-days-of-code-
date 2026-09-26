/*
DAY 35

Question 1:
Find the second largest element in an array.

Question 2:
Rotate an array to the right by k positions.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, k;
    int largest, secondLargest, temp;

    // Question 1
    printf("Question 1:\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    secondLargest = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element = %d\n", secondLargest);

    // Question 2
    printf("\nQuestion 2:\n");

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for (j = 0; j < k; j++)
    {
        temp = arr[n - 1];

        for (i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }

    printf("Array after right rotation:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
