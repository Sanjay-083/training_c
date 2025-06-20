#include <stdio.h>
void main()
{
    int num = 1234;
    int pro = 1;
    while (num > 0)
    {
        pro += num % 10;
        num /= 10;
    }
    printf("%d", pro);
}