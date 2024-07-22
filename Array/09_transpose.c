#include <stdio.h>
int main()
{
    int arr1[3][3], r, c;
    printf("Enter the elements of  matrix1:");
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
            scanf("%d", &arr1[r][c]);
    printf("The original matrix is :\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
            printf("%d\t", arr1[r][c]);
        printf("\n");
    }
    printf("Transpose of matrix is :\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
            printf("%d\t", arr1[c][r]);
        printf("\n");
    }
}