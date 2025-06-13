#include <stdio.h>
void main()
{
    int num = 0b101;
    int sum = 0, val = 1;
    while (num > 0)
    {
        if (num % 10 == 1)
        {
            sum = sum + val;
        }
        val = val * 2;
        num /= 10;
    }
    printf("%d", sum);
}