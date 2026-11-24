/*
DAY 77

Q127 (File Handling):
Write a program that reads text from input.txt,
converts all lowercase letters to uppercase,
and writes the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *input, *output;
    char ch;

    /* Open input.txt in read mode */
    input = fopen("input.txt", "r");

    if(input == NULL)
    {
        printf("Error: input.txt could not be opened.\n");
        return 1;
    }

    /* Open output.txt in write mode */
    output = fopen("output.txt", "w");

    if(output == NULL)
    {
        printf("Error: output.txt could not be created.\n");
        fclose(input);
        return 1;
    }

    /* Read characters from input.txt */
    while((ch = fgetc(input)) != EOF)
    {
        /* Convert lowercase letters to uppercase */
        ch = toupper(ch);

        /* Write to output.txt */
        fputc(ch, output);
    }

    /* Close both files */
    fclose(input);
    fclose(output);

    printf("Text converted to uppercase and saved in output.txt.\n");

    return 0;
}