#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a number");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1;  j<=n; j++)
        {
            if (i<=n+1-j)
            {
                printf("*");
            }else
            printf(" ");
            
        }
        printf("\n");
        
    }
    
}