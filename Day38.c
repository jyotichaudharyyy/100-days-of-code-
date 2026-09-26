/*
DAY 38

Question 1:
Add two matrices.

Question 2:
Check if a matrix is symmetric.
*/

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols, i, j;
    int symmetric = 1;

    // Question 1
    printf("Question 1: Add Two Matrices\n");

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the matrices:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Question 2
    printf("\nQuestion 2: Check Symmetric Matrix\n");

    if (rows != cols)
    {
        symmetric = 0;
    }
    else
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                if (a[i][j] != a[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }
        }
    }

    if (symmetric == 1)
        printf("The first matrix is symmetric.\n");
    else
        printf("The first matrix is not symmetric.\n");

    return 0;
}