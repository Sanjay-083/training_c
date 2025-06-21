#include <stdio.h>
void main()
{
    int val1 = 123, val2 = 456;
    int temp = val2;
    int div=1;
    while (temp > 10)//reverse forward
    {
        temp/=10;
        div*=10;
    }
    while(div > 0){
        val1 = val1 * 10 + val2 / div;
        val2 = val2 % div;
        div /= 10;
    }
    printf("%d",val1);
}