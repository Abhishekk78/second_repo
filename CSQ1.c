#include <stdio.h>

int a,b;

int main(){
    printf("Enter First No :");
    scanf("%d",&a);
    printf("Enter Second No :");
    scanf("%d",&b);

    if( a < b ){
        printf("Minimum No is : %d",a);
    }
    else{
        printf("Minimum No is : %d",b);
    }
    return 0;
}