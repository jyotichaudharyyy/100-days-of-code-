
Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Q14: Write a program to input a character and check whether it is a vowel or consonant using if-else.

#include <stdio.h>

int main()
{
    // Q13
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("%d is a Leap Year.\n", year);
    else if (year % 100 == 0)
        printf("%d is not a Leap Year.\n", year);
    else if (year % 4 == 0)
        printf("%d is a Leap Year.\n", year);
    else
        printf("%d is not a Leap Year.\n", year);

    // Q14
    char ch;

    printf("\nEnter an alphabet: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c is a Vowel.\n", ch);
    else
        printf("%c is a Consonant.\n", ch);

    return 0;
}