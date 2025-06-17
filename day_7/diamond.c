#include <stdio.h>

void main()
{
    int n = 2;
    int i, s, j;
    n = 2 * n - 1;
    for (i = 0; i < n; i++)
    {
        if (i < n / 2 + 1)
        {
            for (s = 0; s < (n / 2 - i); s++)
            {
                printf(" ");
            }
            for (j = 0; j < 2 * i + 1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (s = 0; s < i - n / 2; s++)
            {
                printf(" ");
            }

            for (j = 0; j < 2 * (n - i-1 ) + 1; j++)
            {

                printf("*");
            }
        }
        printf("\n");
    }
}
