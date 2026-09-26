/*
DAY 45

Question 1:
Copy one string to another without using strcpy().

Question 2:
Concatenate two strings without using strcat().
*/

#include <stdio.h>

int main()
{
    char str1[200], str2[100], copy[200];
    int i, j;

    // Question 1
    printf("Question 1:\n");
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    for (i = 0; str1[i] != '\0'; i++)
    {
        copy[i] = str1[i];
    }

    copy[i] = '\0';

    printf("Copied string: %s", copy);

    // Question 2
    printf("\nQuestion 2:\n");
    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from first string
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
    }

    // Find end of first string
    for (i = 0; str1[i] != '\0'; i++)
    {
    }

    // Concatenate second string
    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }

    str1[i] = '\0';

    printf("Concatenated string: %s", str1);

    return 0;
}