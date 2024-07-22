#include <stdio.h>
int main(){
    int n,i,j;
    printf("\n Enter the number:");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<=(n-1)+j)
            printf("* ");
            else
            printf(" ");
                }
                printf("\n");
    }
}