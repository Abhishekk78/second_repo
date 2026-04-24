#include <stdio.h>

int a,b,ans;

int main(){
    printf("Enter a first number:");
    scanf("%d",&a);
    printf("Enter a sectond number:");
    scanf("%d",&b);

    ans = (a + b) * (a + b);

    printf("Whole Square of number is (a + b)^2 = %d",ans);
    return 0;
}