/*
DAY 71

Q121 (File Handling):
Write a C program that creates a text file named info.txt in write mode.
The program should take the user's name and age as input, and write them
to the file using fprintf().

After writing, display a message confirming that the data was
successfully saved.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char name[100];
    int age;

    /* Open file in write mode */
    file = fopen("info.txt", "w");

    if(file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    /* Take user input */
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    /* Write data to the file */
    fprintf(file, "Name: %s", name);
    fprintf(file, "Age: %d\n", age);

    /* Close the file */
    fclose(file);

    printf("Data was successfully saved to info.txt.\n");

    return 0;
}