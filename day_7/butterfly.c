#include <stdio.h>
void main()
{
    int n = 5;
    int i, j;
    n = (n * 2) + 1;
    for (i = 1; i <= n; i++)
    {
        if (i <= (n / 2 )+ 1)
        {
            for (j = 1; j <= i; j++)
            {
                printf(" *");
            }
            for (int s = 1; s <= n - (2 * i); s++)
            {
                printf("  ");
            }
            for (int k = 1; k <= i; k++)
            {
                printf(" *");
            }

            printf("\n");
        }
        else
        {
            for (j = 1; j <= n - i + 1; j++)
            {
                printf(" *");
            }
            for (int s = 1; s < 2 * i - (n + 1); s++)
            {
                printf("  ");
            }
            for (int k = 1; k <= n - i + 1; k++)
            {
                printf(" *");
            }
            printf("\n");
        }
    }
}
