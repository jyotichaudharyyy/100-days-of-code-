/*
DAY 63

Q113:
Write a program to take an integer array arr and an integer k as inputs.
The task is to find the kth smallest element in the array.
Print the kth smallest element as output.
*/

#include <stdio.h>

int main()
{
    int n, k, i, j, temp;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    /* Sort the array in ascending order */
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    /* kth smallest element is at index k-1 */
    printf("Kth smallest element = %d\n", arr[k - 1]);

    return 0;
}