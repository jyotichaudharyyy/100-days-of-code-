/*
DAY 46

Question 1:
Remove all vowels from a string.

Question 2:
Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main()
{
    char str[100], result[100];
    int i, j = 0;
    int count[26] = {0};
    char repeating = '\0';

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Question 1
    printf("\nQuestion 1:\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' &&
            str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u' && str[i] != '\n')
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("String after removing vowels: %s\n", result);

    // Question 2
    printf("\nQuestion 2:\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;

            if (count[str[i] - 'a'] == 2)
            {
                repeating = str[i];
                break;
            }
        }
    }

    if (repeating != '\0')
    {
        printf("First repeating lowercase alphabet = %c\n", repeating);
    }
    else
    {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}