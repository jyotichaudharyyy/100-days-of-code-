
Q19: Write a program to classify a triangle as Equilateral,
Isosceles, or Scalene based on its side lengths.

Q20: Write a program to display the day of the week based on
a number (1-7) using switch-case.

#include <stdio.h>

int main()
{
    // Q19
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a)
        printf("Invalid Triangle\n");
    else if (a == b && b == c)
        printf("Equilateral Triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");

    // Q20
    int day;

    printf("\nEnter day number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number\n");
    }

    return 0;
}