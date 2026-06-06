#include <stdio.h>

int main(){

    int n,i;
    long long sum =0;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum = sum + (2 * i -  1);
    }
    printf("%lld",sum);
    return 0;
}