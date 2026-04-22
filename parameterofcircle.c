#include <stdio.h>

float radius,parameter;

int main(){
    printf("Enter a radius :");
    scanf("%f",&radius);
    parameter = 2 * 3.14 * radius;
    printf("Parameter of circle is %.2f",parameter);
    return 0;

}