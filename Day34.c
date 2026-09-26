/*
DAY 34

Question 1:
Insert an element in an array at a given position.

Question 2:
Delete an element from an array.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, element, position;

    // Question 1
    printf("Question 1:\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert: ");
    scanf("%d %d", &position, &element);

    for (i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Question 2
    printf("\n\nQuestion 2:\n");

    printf("Enter position to delete: ");
    scanf("%d", &position);

    for (i = position; i < n - 1; i++)
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