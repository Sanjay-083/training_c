#include <stdio.h>
void main()
{
    int num;
    scanf("%d", &num);
    int up = num + 1;
    int low = num - 1;
    while (1)
    {
        int n1 = low;
        int ori1 = n1;
        int rev1 = 0;
        while (n1 > 0)
        {
            int d = n1 % 10;
            rev1 = rev1 * 10 + d;
            n1 = n1 / 10;
        }
        if (rev1 == ori1)
        {
            printf("%d\n", ori1);
            break;
        }
        int n2 = up;
        int ori2 = n2;
        int rev2 = 0;
        while (n2 > 0)
        {
            int d = n2 % 10;
            rev2 = rev2 * 10 + d;
            n2 = n2 / 10;
        }
        if (rev2 == ori2)   
        {
            printf("%d", ori2);
            break;
        }
        low--;
        up++;
    }
}
