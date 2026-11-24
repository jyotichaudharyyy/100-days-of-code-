/*
DAY 89

Q139 (Enum):
Show that enums store integers by printing assigned values.
*/

#include <stdio.h>

enum Numbers
{
    FIRST = 5,
    SECOND = 10,
    THIRD = 15,
    FOURTH = 20
};

int main()
{
    enum Numbers num;

    printf("Assigned integer values of enum:\n");

    num = FIRST;
    printf("FIRST = %d\n", num);

    num = SECOND;
    printf("SECOND = %d\n", num);

    num = THIRD;
    printf("THIRD = %d\n", num);

    num = FOURTH;
    printf("FOURTH = %d\n", num);

    return 0;
}