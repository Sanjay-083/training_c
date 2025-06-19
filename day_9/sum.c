#include <stdio.h>
void main()
{
    int num = 1234;
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("%d", sum);
}