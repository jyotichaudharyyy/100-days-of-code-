/*
DAY 43

Question 1:
Reverse a string without using built-in string functions.

Question 2:
Check whether a string is a palindrome.
*/

#include <stdio.h>

int main()
{
    char str[100], reverse[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length of string
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    // Question 1
    printf("\nQuestion 1:\n");

    for (i = 0; i < length; i++)
    {
        reverse[i] = str[length - i - 1];
    }

    reverse[length] = '\0';

    printf("Reversed string = %s\n", reverse);

    // Question 2
    printf("\nQuestion 2:\n");

    for (i = 0; i < length; i++)
    {
        if (str[i] != reverse[i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}