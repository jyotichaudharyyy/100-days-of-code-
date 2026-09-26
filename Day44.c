/*
DAY 44

Question 1:
Count the number of words in a string.

Question 2:
Find the frequency of a character in a string.
*/

#include <stdio.h>

int main()
{
    char str[200], ch;
    int i, words = 0, frequency = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Question 1
    printf("\nQuestion 1:\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        {
            if (inWord == 0)
            {
                words++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    printf("Number of words = %d\n", words);

    // Question 2
    printf("\nQuestion 2:\n");

    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            frequency++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, frequency);

    return 0;
}