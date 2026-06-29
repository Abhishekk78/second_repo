#include <stdio.h>

int main(){

    int arr[5] = {2,4,3,1,7};
    int *ptr;
    int i;

    ptr = arr;

    printf("Sqaure of an array is : \n");

    for(i=0;i<5;i++){

    *( ptr + i ) = (*( ptr + i) * (*( ptr + i )));
    
    printf("%d ",*( ptr + i ));

    }
    
    return 0;
}