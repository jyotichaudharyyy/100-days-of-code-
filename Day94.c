/*
DAY 94

Q144:
Write a function that accepts a structure as parameter
and prints its members.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

/* Function that accepts structure as parameter */
void displayStudent(struct Student s)
{
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    /* Passing structure to function */
    displayStudent(s);

    return 0;
}