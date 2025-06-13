#include <stdio.h>
int main()
{
    int num = 01101;
    int sum = 0;
    while (num > 0)
    {
        int rev = num % 10; // Get the last digit
        printf("%d", rev);
        sum += rev;
        num = num / 10; // Remove the last digit
    }
    printf("\nSum of digits: %d\n", sum);
}

// binary to decimal conversion
// 0b1101 to decimal
// 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 = 8 + 4 + 0 + 1 = 13
// first modulo
// removed=removed+num*pow(2,base);
// division by 2
// update base
