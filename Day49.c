/*
DAY 49

Q97. Print the initials of a name.

Q98. Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char first[30], middle[30], surname[30];

    printf("Enter first name: ");
    scanf("%29s", first);

    printf("Enter middle name: ");
    scanf("%29s", middle);

    printf("Enter surname: ");
    scanf("%29s", surname);

    /* Q97: Print the initials of the name */
    printf("\nQ97 - Initials of the name:\n");
    printf("%c.%c.%c.\n", first[0], middle[0], surname[0]);

    /* Q98: Print initials with surname in full */
    printf("\nQ98 - Initials with surname in full:\n");
    printf("%c.%c. %s\n", first[0], middle[0], surname);

    return 0;
}