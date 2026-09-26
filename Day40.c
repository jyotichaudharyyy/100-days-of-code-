/*
DAY 40

Question 1:
Find the sum of the secondary diagonal elements of a square matrix.

Question 2:
Find the sum of all elements of a matrix.
*/

#include <stdio.h>

int main()
{
    int matrix[10][10];
    int n, i, j;
    int diagonalSum = 0;
    int totalSum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Question 1
    printf("\nQuestion 1:\n");

    for (i = 0; i < n; i++)
    {
        diagonalSum = diagonalSum + matrix[i][n - i - 1];
    }

    printf("Sum of secondary diagonal elements = %d\n", diagonalSum);

    // Question 2
    printf("\nQuestion 2:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            totalSum = totalSum + matrix[i][j];
        }
    }

    printf("Sum of all matrix elements = %d\n", totalSum);

    return 0;
}