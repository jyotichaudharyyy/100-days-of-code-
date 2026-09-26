/*
DAY 48

Question 1:
Check if one string is a rotation of another.

Question 2:
Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    char combined[200];
    char sentence[200];
    int i, start, end;
    char temp;

    // Question 1
    printf("Question 1:\n");

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2))
    {
        printf("Not rotation\n");
    }
    else
    {
        strcpy(combined, str1);
        strcat(combined, str1);

        if (strstr(combined, str2) != NULL)
            printf("Rotation\n");
        else
            printf("Not rotation\n");
    }

    // Question 2
    printf("\nQuestion 2:\n");

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    start = 0;

    for (i = 0; ; i++)
    {
        if (sentence[i] == ' ' ||
            sentence[i] == '\n' ||
            sentence[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;

                start++;
                end--;
            }

            start = i + 1;

            if (sentence[i] == '\0')
                break;
        }
    }

    printf("Sentence after reversing each word:\n");
    printf("%s", sentence);

    return 0;
}