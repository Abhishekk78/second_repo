#include <stdio.h>

int i,j,n=5;

int main(){

    for(i=n;i>=1;i--){
        
        for(j=n;j>=n-i;j--){
            printf(" ");
        }
        
        for(j=i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }

}