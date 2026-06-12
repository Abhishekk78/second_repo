#include <stdio.h>

int arr[] = {12,42,18,50,26};
int sum=0;

int main(){

    for( int i=0;i<5;i++){
        


    sum +=arr[i];


    float avg = sum/5;
    
    
    printf("Average of %.2f\n",avg);
    }
    printf("Sum: %d\n", sum);
    return 0;
}