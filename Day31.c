/*
DAY 31

Question 1:
Find the second largest element in an array.

Question 2:
Reverse an array.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], n, i;
    int largest, secondLargest, temp;

    // Question 1
    printf("Question 1:\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = INT_MIN;
    secondLargest = INT_MIN;

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

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}