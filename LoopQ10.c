#include <stdio.h>

int num,i;
int sum = 0;

int main(){

    printf("Please Enter A Number :");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        
     sum += i;

    }

    printf("Total number of all sum is from 1 to %d => %d",num,sum);
    
    return 0;
}