#include <stdio.h>
#include <conio.h>

float raadius,area;

int main(){
    printf("Enter a radius:");
    scanf("%f",&raadius);
    area = 3.14 * raadius *raadius;
    printf("Area of cicrle is %.2f",area);
    return 0;
}