#include <stdio.h>
void main()
{
    int num =5;
    int i;
    for (i = 31; i >= 0; i--)
    {
        int bin = (num >> i) & 1;
        printf("%d", bin);
    }
}
