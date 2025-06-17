#include <stdio.h>

void main()
{
    int n = 5;
    int i, j, k;
    n = (n * 2) + 1; 
    for (i = 0; i < n; i++)
    {
        if (i <= n / 2)
        {
            for (j = 0; j < i+1; j++)
            {
                printf("*");
            }
            for (j = 0; j < 2 * (n / 2 - i); j++)
            {
                printf(" ");
            }
            for (k = 0; k < i+1; k++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = 0; j < n - i; j++)
            {
                printf("*");
            }
            for (j = 0; j < 2 * (i - n / 2); j++)
            {
                printf(" ");
            }
            for (k = 0; k < n - i; k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
