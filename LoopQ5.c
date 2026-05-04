#include <stdio.h>

int start,end;

int main(){

    printf("Please enter first number:");
    scanf("%d",&start);
    
    printf("Please enter second number:");
    scanf("%d",&end);

    printf("Leap year between %d and %d\n",start,end);

    while (start <= end)
    {
        if((start %4 == 0 && start %100 != 0) || (start %400 == 0)){
            printf("%d\n",start);
        }
        start ++;
    }

    return 0;

}