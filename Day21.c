
Q41: Write a program to print a right-angled triangle
star pattern.

Q42: Write a program to print an inverted right-angled
triangle star pattern.

#include <stdio.h>

int main()
{
    // Q41
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Right-Angled Triangle:\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Q42
    printf("\nInverted Right-Angled Triangle:\n");

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}