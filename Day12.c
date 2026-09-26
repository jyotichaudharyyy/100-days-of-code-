
Q23: Write a program to calculate library fine based on late days:
First 5 days late: Rs. 2/day
Next 5 days late: Rs. 4/day
Next 20 days late: Rs. 6/day
More than 30 days: Membership Cancelled.

Q24: Write a program to calculate electricity bill based on
units consumed with these rates:
First 100 units at Rs. 5/unit
Next 100 units at Rs. 7/unit
Next 100 units at Rs. 10/unit
Above 300 units at Rs. 12/unit

#include <stdio.h>

int main()
{
    // Q23
    int days;
    float fine;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 0)
        printf("No Fine\n");
    else if (days <= 5)
    {
        fine = days * 2;
        printf("Library Fine = Rs. %.2f\n", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Library Fine = Rs. %.2f\n", fine);
    }
    else if (days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Library Fine = Rs. %.2f\n", fine);
    }
    else
        printf("Membership Cancelled\n");

    // Q24
    int units;
    float bill;

    printf("\nEnter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = (100 * 5) + (units - 100) * 7;
    else if (units <= 300)
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    else
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}