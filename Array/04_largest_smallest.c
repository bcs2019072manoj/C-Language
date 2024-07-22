#include <stdio.h>
int main()
{
    // Array declaration
    int arr[5], i, max, min;
    // Array input
    printf("\nEnter the elements of the array :");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    printf("\nlargest element in the array is :%d", max);
    printf("\nsmallest element in the array is :%d", min);
}
