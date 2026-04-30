#include <stdio.h>

int a = 1000,b=20,c=30 ,ans;

int main(){
    

    ans = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Max no is %d",ans);
    return 0;    
}