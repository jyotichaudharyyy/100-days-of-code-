// Q3: Write a program to input the length and breadth of a rectangle and calculate its area and perimeter.
// Q4: Write a program to input the radius of a circle and calculate its area and circumference.

#include <stdio.h>

int main() {

    // Q3: Rectangle
    float length, breadth, area, perimeter;

    printf("Q3 - Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Rectangle Area = %.2f\n", area);
    printf("Rectangle Perimeter = %.2f\n\n", perimeter);


    // Q4: Circle
    float radius, circle_area, circumference;
    float pi = 3.14159;

    printf("Q4 - Enter radius: ");
    scanf("%f", &radius);

    circle_area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Circle Area = %.2f\n", circle_area);
    printf("Circle Circumference = %.2f\n", circumference);

    return 0;
}