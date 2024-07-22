#include <stdio.h>
int main(){
    int n,i,j;
    printf("\n Enter the number:");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((n+1)-j>=i)//logic
            printf("*");
            else
            printf(" ");
                }
                printf("\n");
    }
}