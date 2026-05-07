#include <stdio.h>

int num,firstdigit,lastdigit,sum;

int main(){

    printf("Enter any number :");
    scanf("%d",&num);

    lastdigit = num % 10;

    while(num >= 10){
        num = num / 10;
    }

    firstdigit = num;

    sum = firstdigit + lastdigit ;

    printf("First digit is =%d\n",firstdigit);
    printf("Last digit is  = %d\n",lastdigit);
    printf("Sum is = %d\n",sum);

    return 0;

}