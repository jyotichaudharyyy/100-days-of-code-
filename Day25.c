
Q49: Write a program to print the following pattern:
5
45
345
2345
12345

Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *


#include <stdio.h>

int main()
{
    // Q49
    int i, j;

    printf("Q49 Pattern:\n");

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // Q50
    printf("\nQ50 Pattern:\n");

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}