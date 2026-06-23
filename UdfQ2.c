#include <stdio.h>

int Divisable(int a){

    if(a % 3 == 0 && a % 5 == 0){
        printf("The given number is divisable both 3&5");
    }
    else{
        printf("The given number is  not divisable both 3&5");
    }
}

int main(){
    
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    Divisable(n);

    return 0;
}