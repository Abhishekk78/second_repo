#include <stdio.h>

int num;

int main(){
    printf("Enter a number :");
    scanf("%d",&num);

    if( num > 0 ){
        printf("This Number Is Positive");
    }


     else if( num == 0 ){
         printf("This Number Is Natural");
     }

    else{
        printf("This Number Is Nagative");
    }

    return 0;
}