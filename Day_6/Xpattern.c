#include <stdio.h>
/*
*              *
    *        *
       *  *
       *  *
    *        *
 *              *
void main()
{
    int n = 5;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i==j || i+j==n)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}*/
void main(){
int n = 5;
for (int i = 1; i <= n; i++)
{
    for (int j = 0; j <=n; j++)
    {
        if (i == j || i + j == n+1)
        {
            printf("%d",i);
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
}
}