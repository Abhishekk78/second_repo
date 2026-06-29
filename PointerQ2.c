#include <stdio.h>

void Swap(int *a, int *b){
    
    int temp;
    
    temp = *a;
    *a=*b;
    *b = temp;
    
}

int main(){
    
    int n1,n2;
    
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    
    Swap(&n1,&n2);
    
    printf("a is = %d \n b is = %d ",n1,n2);
    return 0;
}