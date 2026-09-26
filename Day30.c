/*
DAY 30

Question 1:
Count even and odd numbers in an array.

Question 2:
Count positive, negative, and zero elements in an array.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int even = 0, odd = 0;
    int positive = 0, negative = 0, zero = 0;

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
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

    // Question 2
    printf("\nQuestion 2:\n");

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d\n", zero);

    return 0;
}