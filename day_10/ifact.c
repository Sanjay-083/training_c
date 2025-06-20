#include <stdio.h>
void main()
{
    int val = 124;
    int sum = 0;
    while (val > 0)
    {
  
        int num = val % 10;
        int pro = 1;
        for (int i = num; i > 0; i--)
        {
            pro *= i;
        }
        sum += pro;
        val /= 10;
    }
    printf("%d\n", sum);
}
