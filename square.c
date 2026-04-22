#include <stdio.h>
#include <conio.h>
void main() {
    float length, area;

    printf("Enter the side of the square: ");
    scanf("%f", &length);

    area = length * length;

    printf("Area of the square = %.2f", area);

    
}