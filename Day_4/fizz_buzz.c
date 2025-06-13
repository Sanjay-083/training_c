#include <stdio.h>
void main()
{
    int n = 15;
    for (int i = 0; i <= n; i++)
    {
        if (i % 5 == 0 && i % 3 == 0)
        {
            printf("FizzBuzz\n");
        }
    else if (i % 5 == 0)
    {
        printf("Buzz\n");
    }
    else if (i % 3 == 0)
    {
        printf("Fizz\n");
    }
    else
    {
        printf("%d\n", i);
    }
}
}