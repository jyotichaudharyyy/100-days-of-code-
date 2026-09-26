
Q39: Write a program to find the LCM (Least Common Multiple)
of two numbers.

Q40: Write a program to print the multiplication table
of a given number.

#include <stdio.h>

int main()
{
    // Q39
    int num1, num2, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    // Q40
    int n, i;

    printf("\nEnter a number for multiplication table: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}