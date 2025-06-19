#include <stdio.h>
void main()
{
    __int32 val = 1388888, count = 0;
    while (val > 0)
    {
        count++;
        val/=10;
    }
    printf("%d",count);
}