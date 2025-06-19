#include <stdio.h>
void main()
{   int val =400, rev = 0;
    while (val > 0)
    {
        rev = rev * 10 +val%10;
        val/=10;
    }
    printf("%d",rev);
}