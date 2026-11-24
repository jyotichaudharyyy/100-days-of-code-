/*
DAY 78

Q128 (File Handling):
Read a text file and count how many vowels and consonants
are in the file. Ignore digits and special characters.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);

    /* Open file in read mode */
    file = fopen(filename, "r");

    if(file == NULL)
    {
        printf("Error: File could not be opened.\n");
        return 1;
    }

    /* Read file character by character */
    while((ch = fgetc(file)) != EOF)
    {
        ch = tolower(ch);

        /* Check if character is an alphabet */
        if(ch >= 'a' && ch <= 'z')
        {
            /* Check for vowel */
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}