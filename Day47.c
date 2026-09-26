/*
DAY 47

Question 1:
Check if two strings are anagrams of each other.

Question 2:
Find the longest word in a sentence.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], sentence[200];
    int freq1[256] = {0}, freq2[256] = {0};
    int i, anagram = 1;

    // Question 1
    printf("Question 1:\n");

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != '\n')
            freq1[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] != '\n')
            freq2[(unsigned char)str2[i]]++;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    // Question 2
    printf("\nQuestion 2:\n");

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int start = 0, length = 0;
    int maxStart = 0, maxLength = 0;

    for (i = 0; ; i++)
    {
        if (sentence[i] != ' ' &&
            sentence[i] != '\n' &&
            sentence[i] != '\0')
        {
            if (length == 0)
                start = i;

            length++;
        }
        else
        {
            if (length > maxLength)
            {
                maxLength = length;
                maxStart = start;
            }

            length = 0;

            if (sentence[i] == '\0')
                break;
        }
    }

    printf("Longest word: ");

    for (i = maxStart; i < maxStart + maxLength; i++)
    {
        printf("%c", sentence[i]);
    }

    printf("\n");

    return 0;
}