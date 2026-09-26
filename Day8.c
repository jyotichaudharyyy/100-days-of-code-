
Q15: Write a program to input a character and check whether
it is an uppercase alphabet, lowercase alphabet, digit, or
special character.

Q16: Write a program to input three numbers and find the
largest among them using if-else.

#include <stdio.h>

int main()
{
    // Q15
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("%c is an Uppercase Alphabet.\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is a Lowercase Alphabet.\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("%c is a Digit.\n", ch);
    else
        printf("%c is a Special Character.\n", ch);

    // Q16
    int num1, num2, num3;

    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
        printf("%d is the Largest Number.\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("%d is the Largest Number.\n", num2);
    else
        printf("%d is the Largest Number.\n", num3);

    return 0;
}