#include <stdio.h>
int main()
{
    int n = 34, i = 45, temp;
    scanf("%d%d", &n, &i);
    printf("Before:%d %d", i, n);
    temp = n;
    n = i;
    i = temp;
    printf("\nAfter:%d %d", i, n);
    return 0;
}