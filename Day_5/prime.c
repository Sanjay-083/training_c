#include <stdio.h>
void main()
{
    int n=7, flag=0;
    for (int i = 2; i < n; i++)
    {
        int r = n % i;
        if (r == 0)
        {
            flag++;
        }
    }
    if (flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("NOT");
    }
}