#include <stdio.h>

int num,count=0;

int main(){

    printf("Enter a number :");
    scanf("%d",&num);

    while (num != 0)
    {
        num = num/10;
        count ++;
    }

    printf("Total number of digi is = %d",count);

    return 0;
    
}