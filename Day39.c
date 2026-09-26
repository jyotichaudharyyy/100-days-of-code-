/*
DAY 39

Question 1:
Check if the elements on the diagonal of a matrix are distinct.

Question 2:
Find the sum of main diagonal elements for a square matrix.
*/

#include <stdio.h>

int main()
{
    int matrix[10][10];
    int n, i, j;
    int distinct = 1;
    int sum = 0;

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
        for (j = i + 1; j < n; j++)
        {
            if (matrix[i][i] == matrix[j][j])
            {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct == 1)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    // Question 2
    printf("\nQuestion 2:\n");

    for (i = 0; i < n; i++)
    {
        sum = sum + matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}