/*
DAY 36

Question 1:
Merge two arrays.

Question 2:
Find the frequency of each element in an array.
*/

#include <stdio.h>

int main()
{
    int a[100], b[100], merged[200];
    int n1, n2, i, j, count, visited[100] = {0};

    // Question 1
    printf("Question 1:\n");

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        merged[i] = a[i];
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        merged[n1 + i] = b[i];
    }

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    // Question 2
    printf("\n\nQuestion 2:\n");

    printf("Frequency of each element in first array:\n");

    for (i = 0; i < n1; i++)
    {
        if (visited[i] == 1)
            continue;

        count = 1;

        for (j = i + 1; j < n1; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d times\n", a[i], count);
    }

    return 0;
}