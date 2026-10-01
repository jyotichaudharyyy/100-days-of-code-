/*
DAY 50

Q99. Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Q100. Print all sub-strings of a string.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    /* ---------------- Q99 ---------------- */

    int day, month, year;

    printf("Q99 - Change Date Format\n");
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    char *months[] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    if (month >= 1 && month <= 12)
    {
        printf("Formatted date: %02d-%s-%04d\n",
               day, months[month - 1], year);
    }
    else
    {
        printf("Invalid month!\n");
    }


    /* ---------------- Q100 ---------------- */

    char str[100];
    int i, j, k;

    printf("\nQ100 - Print All Sub-strings of a String\n");

    printf("Enter a string: ");
    scanf("%99s", str);

    int length = strlen(str);

    printf("All sub-strings are:\n");

    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}