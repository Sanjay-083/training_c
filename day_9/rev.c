#include <stdio.h>
void main()
{   int val =123, rev = 0;
    while (val > 0)
    {
        rev = rev * 10 +val%10;
        printf("%d\t", rev);
        val/=10;
    }
    printf("%d",rev);
}