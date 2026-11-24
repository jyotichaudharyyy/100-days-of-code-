/*
DAY 82

Q132 (Enum):
Define an enum for traffic lights (RED, YELLOW, GREEN)
and print 'Stop', 'Wait', or 'Go' based on its value.
*/

#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight light;
    int choice;

    printf("Enter traffic light value:\n");
    printf("0 - RED\n");
    printf("1 - YELLOW\n");
    printf("2 - GREEN\n");
    scanf("%d", &choice);

    light = choice;

    switch(light)
    {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid traffic light value.\n");
    }

    return 0;
}