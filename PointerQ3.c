#include <stdio.h>

int main(){

    int n,i;

    printf("Enter a value : ");
    scanf("%d",&n);

    int a[n];
    int *ptr[n];

    printf("Enter element in an array : \n");

    for(i=0;i<5;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("\n square of an array is : \n");

    for(i=n-1;i>=0;i--){
printf("%d ",((*ptr[i]) * (*ptr[i])));
    }
    return 0;
}