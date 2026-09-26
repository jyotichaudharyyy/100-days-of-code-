
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Q52: Write a program to print the following star pattern.

#include <stdio.h>

int main()
{
    // Q51
    int i, j, space;

    printf("Q51 Pattern:\n");

    for (i = 5; i >= 1; i--)
    {
        for (space = 1; space < i; space++)
        {
            printf(" ");
        }

        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // Q52
    printf("\nQ52 Pattern:\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == 5)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}