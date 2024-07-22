#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("\n Enter the number:");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        k=1;
        for(j=1;j<=2*n;j++){
            if(j<=(n-1)+i&&k&&j>=(n+1)-i){
            printf("*");
            k=0;
            }
            else{
            printf(" ");
            k=1;
            }
                }
                printf("\n");
    }
}