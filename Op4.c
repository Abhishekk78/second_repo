#include <stdio.h>

int a,b,temp;

int main(){
    printf("Enter a first number :");
    scanf("%d",&a);
    printf("Enter a second number :");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("\n After swapping a numbers:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}
