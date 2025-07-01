#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int n = 0;
    int max;
    for (int n = 0; n < len - 1; n++)
    {
        int count1 = 0;
        int count0 = 0;
        for (int i = n; i < len; i++)
        {
            if (str[i] == '0')
            {
                count0++;
            }
            else if (str[i] == '1')
            {
                count1++;
            }

            if (count1 == count0)
            {
                if (max < count0 + count1)
                    max = count0 + count1;
            }
        }
        printf("index %d: count0 = %d, count1 = %d\n", n, count0, count1);
    }
    printf("%d\n", max);
    return 0;
}