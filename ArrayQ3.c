#include <stdio.h>

int main(){

    int arr1[5] = {7,4,9,5,2};
    int arr2[5] = {1,3,1,7,3};
    int sum[5],i,n=5;
    
    for(i=0;i<n;i++){

        sum[i] = arr1[i] + arr2[i];

    }

    for(i=0;i<n;i++){
        
        printf("%d\n",sum[i]);
    }


    return 0;
}