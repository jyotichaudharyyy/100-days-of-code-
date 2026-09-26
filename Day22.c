
Q43: Write a program to print a pyramid star pattern.

Q44: Write a program to print a number triangle pattern.

#include <stdio.h>

int main()
{
    // Q43
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Pyramid Star Pattern:\n");

    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    // Q44
    printf("\nNumber Triangle Pattern:\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}