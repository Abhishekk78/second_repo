#include <stdio.h>

int n, i = 2;

int main()
{

    printf("Enter Any Number :");
    scanf("%d", &n);

    do
    {

        if (i % 2 == 0)
        {
            printf("%d", i);
        }

        i++;

    } while (i <= n);

    return 0;
}