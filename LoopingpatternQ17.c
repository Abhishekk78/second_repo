#include <stdio.h>

int i,j,k,n=5;

int main(){
    
    for(i=0;i<n;i++){
        
        for(j=1;j<=n-i;j++){
            printf("%d",j);
        }
        
        printf("\n");
    }
    

     for( i = 1; i <= n; i++) {

      
        for( j = 1; j <= i; j++) {
            printf("%d", j);
        }

       
        printf("\n");
    }
    
    
    
    return 0;
}