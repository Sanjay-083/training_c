#include <stdio.h>

int main()
{
    int val;
    scanf("%d", &val);

    int sum = 0;

    for (int i = 1; i <= val; i++)
    {
        int fact = 1;

        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }

        sum += fact;
    }

    printf("%d\n", sum);

    return 0;
}
