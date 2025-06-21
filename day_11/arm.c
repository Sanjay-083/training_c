#include <stdio.h>
#include <math.h>
void main()
{
    int val = 153;
    int sum = 0;
    int temp = val;
    while (val > 0)
    {
        int n = val % 10;
        sum = sum + n*n*n;
        val /= 10;
    }
    if (sum == temp)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}