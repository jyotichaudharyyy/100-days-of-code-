/*
DAY 33

Question 1:
Insert an element at a given position in an array.

Question 2:
Delete an element from a given position in an array.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, element, position;

    // Input array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Question 1
    printf("\nQuestion 1:\n");
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &position);

    for (i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Question 2
    printf("\n\nQuestion 2:\n");
    printf("Enter the position to delete: ");
    scanf("%d", &position);

    for (i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}