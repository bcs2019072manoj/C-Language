#include <stdio.h>
int main()
{
    // Array declaration
    int arr[5];
    // Array input
    printf("\nEnter the elements of the array :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Array output
    printf("\nElements are :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
}