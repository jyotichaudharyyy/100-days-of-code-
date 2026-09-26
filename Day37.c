/*
DAY 37

Question 1:
Find the sum of each row of a matrix and store it in an array.

Question 2:
Find the transpose of a matrix.
*/

#include <stdio.h>

int main()
{
    int matrix[10][10], transpose[10][10];
    int rowSum[10];
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Question 1
    printf("\nQuestion 1:\n");

    for (i = 0; i < rows; i++)
    {
        rowSum[i] = 0;

        for (j = 0; j < cols; j++)
        {
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    printf("Sum of each row:\n");

    for (i = 0; i < rows; i++)
    {
        printf("%d ", rowSum[i]);
    }

    // Question 2
    printf("\n\nQuestion 2:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");

    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }

    return 0;
}