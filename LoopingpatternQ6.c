#include <stdio.h>

int i, j;

int main()
{

    for (i = 1; i <= 5; i++)
    {

        for (j = i; j <= 5; j++)
        {

            if (j%2 == 0)
            { // Even
                printf("%d ",1);
            }
            else
            { // Odd
                printf("%d ",0);
            }
        }
        printf("\n");
    }

    return 0;
}