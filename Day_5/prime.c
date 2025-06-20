#include <stdio.h>
void main()
{
    int n = 7, co = 0;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            co++;
            printf("%d", co);
        }
    }
    if (co == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("NOT");
    }
}
/*
for(i=2;i<n/2;i++)
{
if (n%i==0)
{
printf(" not prime");
return 0;
}
}
printf("prime")
*/