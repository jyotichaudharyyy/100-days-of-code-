

Q45: Write a program to print Floyd's Triangle.

Q46: Write a program to print Pascal's Triangle.

#include <stdio.h>

int main()
{
    // Q45
    int n, i, j, num = 1;

    printf("Enter number of rows for Floyd's Triangle: ");
    scanf("%d", &n);

    printf("Floyd's Triangle:\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    // Q46
    int coefficient;

    printf("\nPascal's Triangle:\n");

    for (i = 0; i < n; i++)
    {
        coefficient = 1;

        for (j = 0; j <= i; j++)
        {
            printf("%d ", coefficient);
            coefficient = coefficient * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}