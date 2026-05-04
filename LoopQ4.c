#include <stdio.h>

int n;

int main(){

    printf("Please Enter A Value Of N:");
    scanf("%d",&n);

    if( n % 2 == 0){
        n = n - 1;
    }

    while (n >= 1)
    {
        printf("%d\n",n);
        n = n - 2;
    }

    return 0;
    
}