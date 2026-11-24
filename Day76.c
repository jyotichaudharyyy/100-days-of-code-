/*
DAY 76

Q126 (File Handling):
Ask the user for a filename. Check if it exists by trying to open
it in read mode. If the file pointer is NULL, print an error message;
otherwise, read and display its content.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char ch;

    printf("Enter the file name: ");
    scanf("%s", filename);

    /* Open the file in read mode */
    file = fopen(filename, "r");

    /* Check if the file exists */
    if(file == NULL)
    {
        printf("Error: File does not exist.\n");
        return 1;
    }

    printf("File exists.\n");
    printf("Contents of the file:\n");

    /* Read and display file content */
    while((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }

    /* Close the file */
    fclose(file);

    return 0;
}