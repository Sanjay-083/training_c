#include <stdio.h>
void main()
{
    int num = 12;
    int rev = 0, temp = num;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    int sq1 = num * num;
    int sq2 = rev * rev;
    int revsq2 = 0, tempsq2 = sq2;
    while (tempsq2 > 0)
    {
        revsq2 = revsq2 * 10 + tempsq2 % 10;
        tempsq2 /= 10;
    }
    if (sq1 == revsq2)
        printf("Adam Number");
    else
        printf("Not");
}
