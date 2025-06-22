#include <stdio.h>
void main()
{
    int num = 45;
    int sq = num * num; 
    int temp = num;
    int count = 0;
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }
    int div = 1;
    int i = 0;
    while (i < count)
    {
        div = div * 10;
        i++;
    }
    int a = sq % div;
    int b= sq / div;
    if ((a+b) == num)
        printf("Kaprekar Number");
    else
        printf("Not Kaprekar");
}
