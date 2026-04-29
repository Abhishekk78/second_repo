#include <stdio.h>

float Avg, Maths, English, Science;

int main()
{
    printf("Enter Maths Marks:");
    scanf("%f", &Maths);
    printf("Enter English Marks:");
    scanf("%f", &English);
    printf("Enter Science Marks:");
    scanf("%f", &Science);

    Avg = (Maths + English + Science)/3;

    printf("Avarage Marks of 3 Subject is = %.2f",Avg);

    return 0;
}