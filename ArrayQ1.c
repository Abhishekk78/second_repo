#include <stdio.h>

int main(){

    int i,n;

    printf("Enter any number : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements in array : ");

    for(i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("Length of array is = %d\n",n);

    return 0;
}