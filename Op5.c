#include <stdio.h>

int a,b;

int main(){
    printf("Enter a first number:");
    scanf("%d",&a);
    printf("Enter a second number");
    scanf("%d",&b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\n After swapping a number\n");
    printf("a =%d\n",a);
    printf("b = %d\n",b);
    return 0;
}