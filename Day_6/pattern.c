/*
n i s j
5 0 4 1
5 1 3 2
5 2 2 3
5 3 1 4
by approach such way u can print patterns
by using a n and i to contruct S and J
for right angle:
s=(n-(i+1))
j=(i+1)

#include<stdio.h>
void main()
{
    int n = 4;
    int i, j, s;
    for (i = 0; i < n; i++)
    {
        for (s = 0; s < (n - (i + 1)); s++)
        {
            printf(" ");
        }
        for (j = 0; j<(i * 2)+1; j++)
        {
            printf("*");
        }
    printf("\n");

    }
}*/
/*
*  *  *  *  *  *
*              *
*              *
*              *
*              *
*  *  *  *  *  *
#include <stdio.h>
void main()
{
    int n = 5;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == 0 || i == 0 || i == n || j == n)
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

