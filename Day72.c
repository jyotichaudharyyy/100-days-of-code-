/*
DAY 72

Q122 (File Handling):
Write a C program that opens an existing file (e.g., info.txt)
and reads its contents using fgets().
The program should print all the lines to the console
until EOF (end of file) is reached.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char line[1000];

    /* Open the existing file in read mode */
    file = fopen("info.txt", "r");

    if(file == NULL)
    {
        printf("Error: File could not be opened.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    /* Read and print each line until EOF */
    while(fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    /* Close the file */
    fclose(file);

    return 0;
}