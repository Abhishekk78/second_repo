#include <stdio.h>

int i,j,k,n=5;

int main(){

    for(i=0;i<n;i++){

      for(j=1;j<=n-i;j++){

        printf("%d",j);
      
    }  

      for(k=0;k<i*2;k++){

        printf(" ");
      
    }

    for(j=n-i;j>=1;j--){

        printf("%d",j);
    
    }
    printf("\n");
    }


        for( i = 1; i <= n; i++) {

        
        for( j = 1; j <= i; j++) {
            printf("%d", j);
        }

        
        for( k = 1; k <= (n - i) * 2; k++) {
            printf(" ");
        }

        
        for( j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }



    return 0;
}