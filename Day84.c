/*
DAY 84

Q134 (Enum):
Define an enum with SUCCESS, FAILURE, and TIMEOUT,
and print messages accordingly.
*/

#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status status;
    int choice;

    printf("Enter status:\n");
    printf("0 - SUCCESS\n");
    printf("1 - FAILURE\n");
    printf("2 - TIMEOUT\n");
    scanf("%d", &choice);

    status = choice;

    switch(status)
    {
        case SUCCESS:
            printf("Operation was successful.\n");
            break;

        case FAILURE:
            printf("Operation failed.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break;

        default:
            printf("Invalid status.\n");
    }

    return 0;
}