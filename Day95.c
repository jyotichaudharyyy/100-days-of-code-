/*
DAY 95

Q145:
Return a structure containing top student's details
from a function.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

/* Function to find and return top student */
struct Student findTopStudent(struct Student students[], int n)
{
    struct Student top = students[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if(students[i].marks > top.marks)
        {
            top = students[i];
        }
    }

    return top;
}

int main()
{
    struct Student students[5];
    struct Student top;
    int i;

    /* Input details of students */
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

    /* Get top student from function */
    top = findTopStudent(students, 5);

    /* Display top student's details */
    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}