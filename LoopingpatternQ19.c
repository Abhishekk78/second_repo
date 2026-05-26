#include <stdio.h>

int n=5;

int main(){

    for(int i=1;i<=n;i++){
    
        for(int j=1;j<=n-i;j++){
         
         printf(" ");

        }

        for(int j=1;j<=i;j++){

            printf("*",j);
        
        }

        for(int j=i-1;j>=1;j--){

            printf("*",j);
        
        }
        printf("\n");
    }
    return 0;
}