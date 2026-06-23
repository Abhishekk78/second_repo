#include <stdio.h>

int Sumofarray(int arr[], int n){

    int i,sum=0;

    for(i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int n,i;

    printf("Enter any number :");
    scanf("%d",&n);

    int arr[n];

    printf("Enter element an array : \n");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("The sum of an  array is = %d\n",Sumofarray(arr,n));
    return 0;
}