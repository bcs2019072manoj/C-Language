#include <stdio.h>
int main()
{

    int len, i, num, pos;

    printf("\nEnter size of the  array :");

    scanf("%d", &len);
    int arr[len];

    // Array input
    printf("\nEnter the elements of the array :");

    for (int i = 0; i < len; i++)
    {

        scanf("%d", &arr[i]);
    }
    // traversal of array
    printf("\nthe original array is :");

    for (i = 0; i < len; i++)
    {

        printf("%d  ", arr[i]);
    }
    printf("\nEnter element to be inserted :");

    scanf("%d", &num);
    printf("\nEnter position of insertion :");

    scanf("%d", &pos);
    pos--;
    // inserion logic
    for (int i = len - 1; i >= pos; i--)
        arr[i + 1] = arr[i]; // swifting the element
    arr[pos] = num;          // adding the element in the desired position
    if (pos > len)
    {
        printf("\nInsertion outside of the array");
    }
    else
    {
        printf("\nNew array after insertion :");
        len++;
        // output
        for (int i = 0; i < len; i++)
            printf("%d  ", arr[i]);
    }
}