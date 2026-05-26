#include <stdio.h>

int i,j,n=5;

int main(){

    for(i=1;i<=n;i++){


     for(j=1;j<=(i-1)*3;j++){
        printf(" ");
     }   

        for(j=n;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");

    }

    return 0;
}