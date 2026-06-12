#include <stdio.h>

int main(){

    int arr[3][3] = {{2,4,1},{3,5,4},{8,2,6}};
    int arr1[3][3] = {{3,6,2},{5,6,8},{3,7,4}};
    int arr2[3][3];
    int i,j,sum=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr2[i][j] = arr[i][j] + arr1[i][j];
            sum += arr2[i][j];

            printf("%d\n",arr2[i][j]);
        }

    }

    return 0;
}