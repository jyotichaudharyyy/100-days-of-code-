

Q37: Write a program to print the Fibonacci series up to n terms.

Q38: Write a program to find the GCD (Greatest Common Divisor)
of two numbers.


#include <stdio.h>

int main()
{
    // Q37
    int n, i, first = 0, second = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    // Q38
    int num1, num2, a, b, remainder;

    printf("\n\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("GCD of %d and %d = %d\n", num1, num2, a);

    return 0;
}