/*
DAY 75

Q125 (File Handling):
Open an existing file in append mode and allow the user to
enter a new line of text. Append the text at the end without
overwriting existing content.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char text[500];

    printf("Enter the file name: ");
    scanf("%s", filename);

    /* Open file in append mode */
    file = fopen(filename, "a");

    if(file == NULL)
    {
        printf("Error: File could not be opened.\n");
        return 1;
    }

    /* Clear input buffer */
    getchar();

    printf("Enter a new line of text: ");
    fgets(text, sizeof(text), stdin);

    /* Append text to the file */
    fputs(text, file);

    /* Close the file */
    fclose(file);

    printf("Text appended successfully.\n");

    return 0;
}