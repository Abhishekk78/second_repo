#include <stdio.h>

int a,b,c,ans;

int main(){
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);

    ans = a < b ? (a < c ? a : c) : (b < c ? b : c);

    printf("Minimum no using ternory operator is = %d",ans);

    return 0;

}