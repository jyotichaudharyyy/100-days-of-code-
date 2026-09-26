
Q47: Write a program to input elements in an array and
display them.

Q48: Write a program to find the sum and average of
elements in an array.

#include <stdio.h>

int main()
{
    // Q47
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Q48
    int sum = 0;
    float average;

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    printf("\nSum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", average);

    return 0;
}