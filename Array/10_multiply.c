#include <stdio.h>
int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3], r, c;
    printf("Enter the elements of  matrix1:");
    // input 1
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
            scanf("%d", &arr1[r][c]);
    // output matrix 1
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
            printf("%d\t", arr1[r][c]);
        printf("\n");
    }
    // input 2
    printf("Enter the elements of  matrix2:");
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
            scanf("%d", &arr2[r][c]);
    // output matrix 2
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
            printf("%d\t", arr2[r][c]);
        printf("\n");
    }
    // multiply
    printf("multiplication is :\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            arr3[r][c] =0;
            for(int k=0;k<3;k++)
            arr3[r][c] = arr3[r][c] + (arr1[r][k]*arr2[k][c]);
            printf("%d\t", arr3[r][c]);
        }
        printf("\n");
    }
}