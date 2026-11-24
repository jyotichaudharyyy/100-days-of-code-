/*
DAY 74

Q124 (File Handling):
Take two filenames from the user - a source file and a destination file.
Copy all the content from the source file to the destination file
using fgetc() and fputc().
*/

#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destinationName);

    /* Open source file in read mode */
    source = fopen(sourceName, "r");

    if(source == NULL)
    {
        printf("Error: Source file could not be opened.\n");
        return 1;
    }

    /* Open destination file in write mode */
    destination = fopen(destinationName, "w");

    if(destination == NULL)
    {
        printf("Error: Destination file could not be opened.\n");
        fclose(source);
        return 1;
    }

    /* Copy content character by character */
    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}