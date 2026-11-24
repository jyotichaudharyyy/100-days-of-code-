/*
DAY 93

Q143:
Find and print the student with the highest marks.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student students[5];
    int i, highest = 0;

    /* Input details of 5 students */
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    /* Find student with highest marks */
    for(i = 1; i < 5; i++)
    {
        if(students[i].marks > students[highest].marks)
        {
            highest = i;
        }
    }

    /* Display student with highest marks */
    printf("\nStudent with Highest Marks:\n");
    printf("Name: %s\n", students[highest].name);
    printf("Roll Number: %d\n", students[highest].roll_no);
    printf("Marks: %.2f\n", students[highest].marks);

    return 0;
}