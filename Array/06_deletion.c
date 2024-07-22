#include <stdio.h>
int main()
{

    int len, i, num, f = 0;

    printf("\nEnter size of the  array :");

    scanf("%d", &len);
    int arr[len];

    // Array input
    printf("\nEnter the elements of the array :");

    for (i = 0; i < len; i++)
    {

        scanf("%d", &arr[i]);
    }
    // traversal of array
    printf("\nthe original array is :");

    for (i = 0; i < len; i++)
    {

        printf("%d  ", arr[i]);
    }
    printf("\nEnter element to be deleted :");

    scanf("%d", &num);
    // deletion
    for (i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            f = 1;
            for (; i < len; i++)
                arr[i] = arr[i + 1]; // Left swifts the elements of the
            len--;
            break;
        }
    }
    if (f == 0)
        printf("\nElement not found:");
    // output
    printf("\nArray after deletion :");
    for (int i = 0; i < len; i++)
        printf("%d  ", arr[i]);
}