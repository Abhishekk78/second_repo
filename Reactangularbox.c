#include <stdio.h>

int main() {
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    printf("\n");
    printf("------------\n");
    printf("|          |\n");
    printf("| %d x %d = %d |\n", num, num, square);
    printf("|          |\n");
    printf("------------\n");

    return 0;
}