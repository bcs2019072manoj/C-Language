#include <stdio.h>
int main()
{
    int arr[3][3], r, c;
    printf("Enter the elements of  matrix:");
    // input
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
            scanf("%d", &arr[r][c]);
    // output
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
            printf("%d\t", arr[r][c]);
        printf("\n");
    }
}