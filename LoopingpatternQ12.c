#include <stdio.h>

int i, j;

int main()
{
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        // spaces
        for (j = 1; j <= (i - 1) * 4; j++)
        {
            printf(" ");
        }

        // numbers (your same logic)
        for (j = i; j <= n; j++)
        {
            if (j % 2 == 0)
                printf("0 ");
            else
                printf("1 ");
        }

        printf("\n");
    }

    return 0;
}