/*
DAY 41

Question 1:
Count characters in a string without using built-in length functions.

Question 2:
Print each character of a string on a new line.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    // Question 1
    printf("Question 1:\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        length++;
    }

    printf("Number of characters = %d\n", length);

    // Question 2
    printf("\nQuestion 2:\n");
    printf("Characters on separate lines:\n");

    for (i = 0; i < length; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}