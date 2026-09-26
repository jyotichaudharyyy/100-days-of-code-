
Q17: Write a program to find the roots of a quadratic equation
and categorize them.

Q18: Write a program that accepts a percentage (0-100) and
assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
Below 60: Grade F

#include <stdio.h>
#include <math.h>

int main()
{
    // Q17
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    {
        printf("Roots are complex and imaginary.\n");
    }

    // Q18
    float percentage;

    printf("\nEnter percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100)
        printf("Invalid percentage.\n");
    else if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}