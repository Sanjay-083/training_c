#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int started = 0;

    for (int i = 31; i >= 0; i--)
    {
        int bin = (num >> i) & 1;

        if (bin == 1)
            started = 1;

        if (started)
            printf("%d", bin);
    }

    if (!started)
        printf("0");

    return 0;
}
