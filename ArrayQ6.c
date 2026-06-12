#include <stdio.h>

int main(){

    int arr[3][3] = {{2,4,1},{3,5,4},{8,2,6}};
    int i,j,sum=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){


            if( i + j == 2){

                sum+=arr[i][j];
            }
        }
    }
    printf("The sum of ani-diagonal is : %d\n",sum);
    return 0;

}