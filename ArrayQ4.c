#include <stdio.h>

int main(){

    int arr[3][3] = {{2,4,1},{3,5,4},{8,2,6}};
    int i,j,sum=0;
    float avg;


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum += arr[i][j];
        }
    }
    
    avg = (float)sum / 9;
    printf("The sum of the elements in the array is: %.2f\n", avg);
    return 0;

}