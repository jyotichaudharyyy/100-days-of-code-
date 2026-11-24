/*
DAY 80

Q130 (File Handling):
Store multiple student records (name, roll number, marks)
into a file using fprintf().
Then read them using fscanf() and display each record.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char name[50];
    int roll, n, i;
    float marks;

    /* Open file in write mode */
    file = fopen("students.txt", "w");

    if(file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    /* Take student details and write to file */
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);

    /* Open file in read mode */
    file = fopen("students.txt", "r");

    if(file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    /* Read and display student records */
    while(fscanf(file, "%s %d %f", name, &roll, &marks) == 3)
    {
        printf("\nName: %s\n", name);
        printf("Roll Number: %d\n", roll);
        printf("Marks: %.2f\n", marks);
    }

    fclose(file);

    return 0;
}