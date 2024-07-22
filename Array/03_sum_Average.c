#include <stdio.h>
int main()
{
    // Array declaration
    int arr[5];
    float sum = 0, avg;
    // Array input
    printf("\nEnter the elements of the array :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
        avg = sum / 5;
    }
    printf("\n sum : %.2f", sum);
    printf("\n avg : %.2f", avg);
}