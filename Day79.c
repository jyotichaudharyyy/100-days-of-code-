/*
DAY 79

Q129 (File Handling):
A file numbers.txt contains a list of integers separated by spaces.
Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    int num;
    int sum = 0, count = 0;
    float average;

    /* Open numbers.txt in read mode */
    file = fopen("numbers.txt", "r");

    if(file == NULL)
    {
        printf("Error: File could not be opened.\n");
        return 1;
    }

    /* Read all integers from the file */
    while(fscanf(file, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    fclose(file);

    /* Calculate and print average */
    if(count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("No numbers found in the file.\n");
    }

    return 0;
}