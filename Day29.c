/*
DAY 29

Question 1:
Write a program to find the sum of all elements of an array.

Question 2:
Write a program to find the largest element in an array.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0, largest;

    // Question 1
    printf("Question 1:\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of all elements = %d\n", sum);

    // Question 2
    printf("\nQuestion 2:\n");

    largest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest element in the array = %d\n", largest);

    return 0;
}