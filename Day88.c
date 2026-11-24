/*
DAY 88

Q138 (Enum):
Print all enum names and integer values using a loop.
*/

#include <stdio.h>

enum Colors
{
    RED,
    GREEN,
    BLUE,
    YELLOW
};

int main()
{
    enum Colors color;
    char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    printf("Enum Names and Integer Values:\n");

    for(color = RED; color <= YELLOW; color++)
    {
        printf("%s = %d\n", names[color], color);
    }

    return 0;
}