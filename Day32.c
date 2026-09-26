/*
DAY 32

Question 1:
Copy all elements from one array to another.

Question 2:
Count the frequency of a given element in an array.
*/

#include <stdio.h>

int main()
{
    int arr[100], copy[100];
    int n, i, element, frequency = 0;

    // Question 1
    printf("Question 1:\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        copy[i] = arr[i];
    }

    printf("Copied array elements are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", copy[i]);
    }

    // Question 2
    printf("\n\nQuestion 2:\n");
    printf("Enter the element to find its frequency: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            frequency++;
        }
    }

    printf("Frequency of %d = %d\n", element, frequency);

    return 0;
}