#include <stdio.h>
void main()
{
    int val = 145;
    int sum = 0;
    int temp=val;
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
    if (temp == sum)
    {
        printf("Strong");
    }
    else
    {
        printf("not ");
    }
}
