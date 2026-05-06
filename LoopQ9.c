#include <stdio.h>

int n,i;
int a=0,b=1,next;

int main(){

    printf("Enter any number:");
    scanf("%d",&n);

    printf("Print Fabonacci Seris:\n");

    for( i=1 ; i <= n; i++){
        printf("%d\n",a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}