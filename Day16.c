
Q31: Write a program to take a number as input and print its
equivalent binary representation.

Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main()
{
    // Q31
    int n, binary = 0, place = 1, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;

    while (temp > 0)
    {
        remainder = temp % 2;
        binary = binary + remainder * place;
        place = place * 10;
        temp = temp / 2;
    }

    printf("Binary representation of %d = %d\n", n, binary);

    // Q32
    int num, original, reverse = 0;

    printf("\nEnter a number to check palindrome: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
    }

    if (original == reverse)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is not a Palindrome.\n", original);

    return 0;
}