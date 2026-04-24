#include <stdio.h>

int a,b,ans;

int main(){
    printf("Enter a first number : ");
    scanf("%d",&a);
    printf("Enter a second number :");
    scanf("%d",&b);

    ans = (a - b) * (a - b);
    printf("Whole square of this number is (a - b)^2 = %d",ans);
    return 0;
}