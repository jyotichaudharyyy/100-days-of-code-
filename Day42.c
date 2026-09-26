/*
DAY 42

Question 1:
Count vowels and consonants in a string.

Question 2:
Convert a lowercase string to uppercase.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, vowels = 0, consonants = 0;

    // Question 1
    printf("Question 1:\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] == 'a' || str[i] == 'e' ||
                str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u' || str[i] == 'A' ||
                str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    // Question 2
    printf("\nQuestion 2:\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("String in uppercase: %s", str);

    return 0;
}
