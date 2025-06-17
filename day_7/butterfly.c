#include <stdio.h>
void main()
{
    int n = 2;
    int i, j,s, k;
    n = (n * 2) + 1; 
    for (i = 0; i < n; i++)
    {
        if (i < n / 2 + 1)
        {
            for (j = 0; j < i+1; j++)
            {
                printf("*");               //j==0 ,==i
            }
            for (s = 0; s < 2 * (n / 2 - i); s ++)
            {
                printf(" ");
            }
            for (k = 0; k < i + 1; k++)     //k==0 ,==i
            {
                printf("*");
            }
        }
        else
        {
            for (j = 0; j < n - i; j++)
            {
                printf("*");         // n - i - 1,===0
            }
            for (s = 0; s < 2 * (i - n / 2); s++)
            {
                printf(" ");
            }
            for (k = 0; k < n - i; k++)
            {
                printf("*");          // n - i - 1,===0
            }
        }
        printf("\n");
    }
}
